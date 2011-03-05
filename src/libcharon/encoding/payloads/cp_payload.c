/*
<<<<<<< HEAD
 * Copyright (C) 2005-2009 Martin Willi
=======
 * Copyright (C) 2005-2010 Martin Willi
 * Copyright (C) 2010 revosec AG
>>>>>>> upstream/4.5.1
 * Copyright (C) 2005 Jan Hutter
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <stddef.h>

#include "cp_payload.h"

#include <encoding/payloads/encodings.h>
#include <utils/linked_list.h>

ENUM(config_type_names, CFG_REQUEST, CFG_ACK,
	"CFG_REQUEST",
	"CFG_REPLY",
	"CFG_SET",
	"CFG_ACK",
);

typedef struct private_cp_payload_t private_cp_payload_t;

/**
 * Private data of an cp_payload_t object.
<<<<<<< HEAD
 *
 */
struct private_cp_payload_t {
=======
 */
struct private_cp_payload_t {

>>>>>>> upstream/4.5.1
	/**
	 * Public cp_payload_t interface.
	 */
	cp_payload_t public;

	/**
	 * Next payload type.
	 */
	u_int8_t  next_payload;

	/**
	 * Critical flag.
	 */
	bool critical;

	/**
<<<<<<< HEAD
=======
	 * Reserved bits
	 */
	bool reserved_bit[7];

	/**
	 * Reserved bytes
	 */
	u_int8_t reserved_byte[3];

	/**
>>>>>>> upstream/4.5.1
	 * Length of this payload.
	 */
	u_int16_t payload_length;

	/**
	 * List of attributes, as configuration_attribute_t
	 */
	linked_list_t *attributes;

	/**
	 * Config Type.
	 */
	u_int8_t type;
};

/**
 * Encoding rules to parse or generate a IKEv2-CP Payload
 *
 * The defined offsets are the positions in a object of type
 * private_cp_payload_t.
<<<<<<< HEAD
 *
 */
encoding_rule_t cp_payload_encodings[] = {
	/* 1 Byte next payload type, stored in the field next_payload */
	{ U_INT_8,		offsetof(private_cp_payload_t, next_payload) 			},
	/* the critical bit */
	{ FLAG,			offsetof(private_cp_payload_t, critical) 				},
	/* 7 Bit reserved bits, nowhere stored */
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	/* Length of the whole CP payload*/
	{ PAYLOAD_LENGTH,		offsetof(private_cp_payload_t, payload_length) 	},
	/* Proposals are stored in a proposal substructure,
	   offset points to a linked_list_t pointer */
	{ U_INT_8,				offsetof(private_cp_payload_t, type)			},
	{ RESERVED_BYTE,0 														},
	{ RESERVED_BYTE,0														},
	{ RESERVED_BYTE,0														},
	{ CONFIGURATION_ATTRIBUTES,	offsetof(private_cp_payload_t, attributes)	}
=======
 */
encoding_rule_t cp_payload_encodings[] = {
	/* 1 Byte next payload type, stored in the field next_payload */
	{ U_INT_8,					offsetof(private_cp_payload_t, next_payload)	},
	/* the critical bit */
	{ FLAG,						offsetof(private_cp_payload_t, critical)		},
	/* 7 Bit reserved bits */
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[0])	},
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[1])	},
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[2])	},
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[3])	},
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[4])	},
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[5])	},
	{ RESERVED_BIT,				offsetof(private_cp_payload_t, reserved_bit[6])	},
	/* Length of the whole CP payload*/
	{ PAYLOAD_LENGTH,			offsetof(private_cp_payload_t, payload_length)	},
	/* Proposals are stored in a proposal substructure,
	   offset points to a linked_list_t pointer */
	{ U_INT_8,					offsetof(private_cp_payload_t, type)			},
	/* 3 reserved bytes */
	{ RESERVED_BYTE,			offsetof(private_cp_payload_t, reserved_byte[0])},
	{ RESERVED_BYTE,			offsetof(private_cp_payload_t, reserved_byte[1])},
	{ RESERVED_BYTE,			offsetof(private_cp_payload_t, reserved_byte[2])},
	{ CONFIGURATION_ATTRIBUTES,	offsetof(private_cp_payload_t, attributes)		}
>>>>>>> upstream/4.5.1
};

/*
                           1                   2                   3
       0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      ! Next Payload  !C! RESERVED    !         Payload Length        !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      !   CFG Type    !                    RESERVED                   !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      !                                                               !
      ~                   Configuration Attributes                    ~
      !                                                               !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

<<<<<<< HEAD
/**
 * Implementation of payload_t.verify.
 */
static status_t verify(private_cp_payload_t *this)
=======
METHOD(payload_t, verify, status_t,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	status_t status = SUCCESS;
	enumerator_t *enumerator;
	payload_t *attribute;

	enumerator = this->attributes->create_enumerator(this->attributes);
	while (enumerator->enumerate(enumerator, &attribute))
	{
		status = attribute->verify(attribute);
		if (status != SUCCESS)
		{
			break;
		}
	}
	enumerator->destroy(enumerator);
	return status;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_encoding_rules.
 */
static void get_encoding_rules(private_cp_payload_t *this,
							   encoding_rule_t **rules, size_t *rule_count)
{
	*rules = cp_payload_encodings;
	*rule_count = sizeof(cp_payload_encodings) / sizeof(encoding_rule_t);
}

/**
 * Implementation of payload_t.get_type.
 */
static payload_type_t get_type(private_cp_payload_t *this)
=======
METHOD(payload_t, get_encoding_rules, void,
	private_cp_payload_t *this, encoding_rule_t **rules, size_t *rule_count)
{
	*rules = cp_payload_encodings;
	*rule_count = countof(cp_payload_encodings);
}

METHOD(payload_t, get_type, payload_type_t,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return CONFIGURATION;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_next_type.
 */
static payload_type_t get_next_type(private_cp_payload_t *this)
=======
METHOD(payload_t, get_next_type, payload_type_t,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->next_payload;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.set_next_type.
 */
static void set_next_type(private_cp_payload_t *this,payload_type_t type)
=======
METHOD(payload_t, set_next_type, void,
	private_cp_payload_t *this,payload_type_t type)
>>>>>>> upstream/4.5.1
{
	this->next_payload = type;
}

/**
 * recompute the length of the payload.
 */
static void compute_length(private_cp_payload_t *this)
{
	enumerator_t *enumerator;
	payload_t *attribute;

	this->payload_length = CP_PAYLOAD_HEADER_LENGTH;

	enumerator = this->attributes->create_enumerator(this->attributes);
	while (enumerator->enumerate(enumerator, &attribute))
	{
		this->payload_length += attribute->get_length(attribute);
	}
	enumerator->destroy(enumerator);
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_length.
 */
static size_t get_length(private_cp_payload_t *this)
=======
METHOD(payload_t, get_length, size_t,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->payload_length;
}

<<<<<<< HEAD
/**
 * Implementation of cp_payload_t.create_attribute_enumerator.
 */
static enumerator_t *create_attribute_enumerator(private_cp_payload_t *this)
=======
METHOD(cp_payload_t, create_attribute_enumerator, enumerator_t*,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->attributes->create_enumerator(this->attributes);
}

<<<<<<< HEAD
/**
 * Implementation of cp_payload_t.add_attribute.
 */
static void add_attribute(private_cp_payload_t *this,
						  configuration_attribute_t *attribute)
=======
METHOD(cp_payload_t, add_attribute, void,
	private_cp_payload_t *this, configuration_attribute_t *attribute)
>>>>>>> upstream/4.5.1
{
	this->attributes->insert_last(this->attributes, attribute);
	compute_length(this);
}

<<<<<<< HEAD
/**
 * Implementation of cp_payload_t.get_type.
 */
static config_type_t get_config_type(private_cp_payload_t *this)
=======
METHOD(cp_payload_t, get_config_type, config_type_t,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->type;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.destroy and cp_payload_t.destroy.
 */
static void destroy(private_cp_payload_t *this)
=======
METHOD2(payload_t, cp_payload_t, destroy, void,
	private_cp_payload_t *this)
>>>>>>> upstream/4.5.1
{
	this->attributes->destroy_offset(this->attributes,
								offsetof(configuration_attribute_t, destroy));
	free(this);
}

/*
 * Described in header.
 */
<<<<<<< HEAD
cp_payload_t *cp_payload_create()
{
	private_cp_payload_t *this = malloc_thing(private_cp_payload_t);

	this->public.payload_interface.verify = (status_t (*) (payload_t *))verify;
	this->public.payload_interface.get_encoding_rules = (void (*) (payload_t *, encoding_rule_t **, size_t *) ) get_encoding_rules;
	this->public.payload_interface.get_length = (size_t (*) (payload_t *)) get_length;
	this->public.payload_interface.get_next_type = (payload_type_t (*) (payload_t *)) get_next_type;
	this->public.payload_interface.set_next_type = (void (*) (payload_t *,payload_type_t)) set_next_type;
	this->public.payload_interface.get_type = (payload_type_t (*) (payload_t *)) get_type;
	this->public.payload_interface.destroy = (void (*) (payload_t *))destroy;

	this->public.create_attribute_enumerator = (enumerator_t*(*)(cp_payload_t *))create_attribute_enumerator;
	this->public.add_attribute = (void (*) (cp_payload_t *,configuration_attribute_t*))add_attribute;
	this->public.get_type = (config_type_t (*) (cp_payload_t *))get_config_type;
	this->public.destroy = (void (*)(cp_payload_t *))destroy;

	/* set default values of the fields */
	this->critical = FALSE;
	this->next_payload = NO_PAYLOAD;
	this->payload_length = CP_PAYLOAD_HEADER_LENGTH;
	this->attributes = linked_list_create();
	this->type = CFG_REQUEST;

=======
cp_payload_t *cp_payload_create_type(config_type_t type)
{
	private_cp_payload_t *this;

	INIT(this,
		.public = {
			.payload_interface = {
				.verify = _verify,
				.get_encoding_rules = _get_encoding_rules,
				.get_length = _get_length,
				.get_next_type = _get_next_type,
				.set_next_type = _set_next_type,
				.get_type = _get_type,
				.destroy = _destroy,
			},
			.create_attribute_enumerator = _create_attribute_enumerator,
			.add_attribute = _add_attribute,
			.get_type = _get_config_type,
			.destroy = _destroy,
		},
		.next_payload = NO_PAYLOAD,
		.payload_length = CP_PAYLOAD_HEADER_LENGTH,
		.attributes = linked_list_create(),
		.type = type,
	);
>>>>>>> upstream/4.5.1
	return &this->public;
}

/*
 * Described in header.
 */
<<<<<<< HEAD
cp_payload_t *cp_payload_create_type(config_type_t type)
{
	private_cp_payload_t *this = (private_cp_payload_t*)cp_payload_create();

	this->type = type;

	return &this->public;
}

=======
cp_payload_t *cp_payload_create()
{
	return cp_payload_create_type(CFG_REQUEST);
}
>>>>>>> upstream/4.5.1
