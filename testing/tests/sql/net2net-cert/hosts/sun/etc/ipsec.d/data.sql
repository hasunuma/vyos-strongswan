/* Identities */

INSERT INTO identities (
  type, data
) VALUES ( /* C=CH, O=Linux strongSwan, CN=strongSwan Root CA */
  9, X'3045310B300906035504061302434831193017060355040A13104C696E7578207374726F6E675377616E311B3019060355040313127374726F6E675377616E20526F6F74204341'
 );

INSERT INTO identities (
  type, data
) VALUES ( /* subjkey of 'C=CH, O=Linux strongSwan, CN=strongSwan Root CA' */
  11, X'5da7dd700651327ee7b66db3b5e5e060ea2e4def'
 );

INSERT INTO identities (
  type, data
) VALUES ( /* keyid of 'C=CH, O=Linux strongSwan, CN=strongSwan Root CA' */
  11, X'ae096b87b44886d3b820978623dabd0eae22ebbc'
 );

INSERT INTO identities (
  type, data
) VALUES ( /* moon.strongswan.org */
  2, X'6d6f6f6e2e7374726f6e677377616e2e6f7267'
 );

INSERT INTO identities (
  type, data
) VALUES ( /* sun.strongswan.org */
  2, X'73756e2e7374726f6e677377616e2e6f7267'
 );

INSERT INTO identities (
  type, data
) VALUES ( /* subjkey of 'C=CH, O=Linux strongSwan, CN=sun.strongswan.org' */
  11, X'56d69e2fdaa8a1cd195c2353e7c5b67096e30bfb'
 );

/* Certificates */

INSERT INTO certificates (
   type, keytype, data
) VALUES ( /* C=CH, O=Linux strongSwan, CN=strongSwan Root CA */
  1, 1, X'308203b53082029da003020102020100300d06092a864886f70d01010405003045310b300906035504061302434831193017060355040a13104c696e7578207374726f6e675377616e311b3019060355040313127374726f6e675377616e20526f6f74204341301e170d3034303931303131303134355a170d3134303930383131303134355a3045310b300906035504061302434831193017060355040a13104c696e7578207374726f6e675377616e311b3019060355040313127374726f6e675377616e20526f6f7420434130820122300d06092a864886f70d01010105000382010f003082010a0282010100bff25f62ea3d566e58b3c87a49caf3ac61cfa96377734d842db3f8fd6ea023f7b0132e66265012317386729c6d7c427a8d9f167be138e8ebae2b12b95933baef36a315c3ddf224cee4bb9bd578135d0467382629621ff96b8d45f6e002e5083662dce181805c140b3f2ce93f83aee3c861cff610a39f0189cb3a3c7cb9bf7e2a09544e2170efaa18fdd4ff20fa94be176d7fecff821f68d17152041d9b46f0cfcfc1e4cf43de5d3f3a587763afe9267f53b11699b3264fc55c5189f5682871166cb98307950569641fa30ffb50de134fed2f973cef1a392827862bc4ddaa97bbb01442e293c41070d07224d4be47ae2753eb2bed4bc1da91c68ec780c4620f0f0203010001a381af3081ac300f0603551d130101ff040530030101ff300b0603551d0f040403020106301d0603551d0e041604145da7dd700651327ee7b66db3b5e5e060ea2e4def306d0603551d230466306480145da7dd700651327ee7b66db3b5e5e060ea2e4defa149a4473045310b300906035504061302434831193017060355040a13104c696e7578207374726f6e675377616e311b3019060355040313127374726f6e675377616e20526f6f74204341820100300d06092a864886f70d010104050003820101009ad74e3e60592dfb9b21c78628bd76b63090c1720c74bf94753cad6fddadc9c776eb39d3bfaa52136bf528840078386308fcf79503bd3d1ad6c15ac38e10c846bff7888a03cfe7fa0e644b522b2af5aedf0bbc508dc48330a180757772771095059b2be148f58dc0c753b59e9d6bfb02e9b685a928a284531b187313fd2b835bc9ea27d0020739a8d485e88bdede9a45cde6d28ed553b0e8e92dabf877bed59abf9d151f15e4f2d00b5e6e49fcb665293d2296697926c2954dae367542ef6e98053e76d2728732f6ce69f284f0b856aa6c2823a9ee29b280a66f50828f9b5cf27f84feca3c31c24897db156c7a833768ab306f51286457a51f09dd53bbb4190f'
);

INSERT INTO certificates (
   type, keytype, data
) VALUES ( /* C=CH, O=Linux strongSwan, CN=sun.strongswan.org */
  1, 1, X'3082042030820308a003020102020116300d06092a864886f70d01010b05003045310b300906035504061302434831193017060355040a13104c696e7578207374726f6e675377616e311b3019060355040313127374726f6e675377616e20526f6f74204341301e170d3039303832373039353930345a170d3134303832363039353930345a3045310b300906035504061302434831193017060355040a13104c696e7578207374726f6e675377616e311b30190603550403131273756e2e7374726f6e677377616e2e6f726730820122300d06092a864886f70d01010105000382010f003082010a0282010100df95548a67e90e63694fff10dea9e80e5c49f51f8412b49856b695a145661fd8d21eba017aaaad0dd7f75ee1ed836c4a4ebca28c18f61f48de03b1ee135506c26bd958dd602f9bd2ae4d4e16b4f7f0399a29affe9ad88faa34c9ac31a0f8e80ecf5887b0fb29ff85f1f920934b2d9472595fae89edd36b1576e0d7106577e129e4eaf615b119f50594a51413ba176936dff8f58bb1439f437a663d2116f0b2b2821c7d261ab26c0dda9e6f46a9fbc42f4971e30add5fafd30d29668014040b2902387b475ad67b4f08440b784f37dfe34d441806b9f9342aa193dde017aabc5af401085099d570f7b141da94323714a5715bf1637345607c1208770432ba16c10203010001a38201193082011530090603551d1304023000300b0603551d0f0404030203a8301d0603551d0e0416041456d69e2fdaa8a1cd195c2353e7c5b67096e30bfb306d0603551d230466306480145da7dd700651327ee7b66db3b5e5e060ea2e4defa149a4473045310b300906035504061302434831193017060355040a13104c696e7578207374726f6e675377616e311b3019060355040313127374726f6e675377616e20526f6f74204341820100301d0603551d1104163014821273756e2e7374726f6e677377616e2e6f726730130603551d25040c300a06082b0601050507030130390603551d1f04323030302ea02ca02a8628687474703a2f2f63726c2e7374726f6e677377616e2e6f72672f7374726f6e677377616e2e63726c300d06092a864886f70d01010b05000382010100a37ecb613f40c31d0c2bf9c0159a4f26a52bd04cbe3b952472c771ee7774d12966a6241163c2a6b915c20509c312074bb2d777b254234f4a49120585d29cf1c9b9c8e9e3b360084b7e16abb7e5f58544623466d78e0826dace08e7e2b7d9b54890d12a96c62777fe85f68a3964d3b4fde4d3aee2d97e435eff372104629efd9ecc69c57095859609b32d055e0ad5de5d19c45182943d5a2bc39666ad361f7096c7034a04869371c991bc67abaf7954def351b0d6014bd65a15796c80e394047fc724fd029a88c62c95551ba57d8ac4ed4d391dbb7a1a002ba0028ba7aa89ba9f7e4f14002928ca23027485feceb98c90f1366d5474bb00e866f93ff91bf8c618'
);

INSERT INTO certificate_identity (
  certificate, identity
) VALUES (
  1, 1
);

INSERT INTO certificate_identity (
  certificate, identity
) VALUES (
  1, 2
);

INSERT INTO certificate_identity (
  certificate, identity
) VALUES (
  1, 3
);

INSERT INTO certificate_identity (
  certificate, identity
) VALUES (
  2, 5 
);

INSERT INTO certificate_identity (
  certificate, identity
) VALUES (
  2, 6 
);

/* Private Keys */

INSERT INTO private_keys (
   type, data
) VALUES ( /* key of 'C=CH, O=Linux strongSwan, CN=sun.strongswan.org' */
  1, X'308204a40201000282010100df95548a67e90e63694fff10dea9e80e5c49f51f8412b49856b695a145661fd8d21eba017aaaad0dd7f75ee1ed836c4a4ebca28c18f61f48de03b1ee135506c26bd958dd602f9bd2ae4d4e16b4f7f0399a29affe9ad88faa34c9ac31a0f8e80ecf5887b0fb29ff85f1f920934b2d9472595fae89edd36b1576e0d7106577e129e4eaf615b119f50594a51413ba176936dff8f58bb1439f437a663d2116f0b2b2821c7d261ab26c0dda9e6f46a9fbc42f4971e30add5fafd30d29668014040b2902387b475ad67b4f08440b784f37dfe34d441806b9f9342aa193dde017aabc5af401085099d570f7b141da94323714a5715bf1637345607c1208770432ba16c102030100010282010031f9d618cddb393d1d5825426713016cdc5227b970b321acff8cf66b42f0ede3702c30158e8ec1f9db314f031f2d0632a1e0e6507c6fdf545153f01cb0338c3c3f11291cea9819b381048494ecc492ecbd39de3e01ecb048325e75dfee045512a2643e885fcbe672d140877885105e2325390ef183b883321c0d6be51d592b79dfd0f3b522a29509f6c5d3d98c59cc4f4fe9aef978340ffc667e78fd27560eae7245d2d66fa10ad55ef2277ebcec65d1d63cc6b60cbb4d7ba77142554d8817ed174fd539fa8160fc60043f45f4f40dd5989b85874a049bf7f356f250591f6cb2de183e94d8287d712f4df0643b94325b7d4b22bd2d095eb384921c63d33168a502818100f6c92d6977e13cb7b41028dd79010eab910ab83ac2be248a08eb8057804348eb1dc3afb92d67d855bfe891ef0def494bdd109b95c8f5a4e296522d8efd2a4425d0d176e8b0da033d717b77fdb0a14931c2e13b08c7137f0dbf4e1a0ef6919e2c458e40bbecf20004180705e1156bb1d7de09939a8ad096e5346f49e5032a643702818100e7ee610601d43043bea5d304e6502249ce4f70d4de8e903a8fe3a2902878fc7157cb70bf74bc7e0acd7e7a0c3ae1cf2255a22f344a3b9fb13d2347b75ea6a73d15e1327051acffb7f4e56c58f999d7c2e2d878bce0ac09ca2f18d759775c93aa698a45c0c554b99a7147475f1b993fe46c13fed12499006094e806de6db350c702818100e26dd577d6a1579769e405caa7329c26388f3057e1c49a3bf85133d19502a74dea6258c1bbf272e0c292fe0aebab28822dd4061cd964e123712ef75421defce601819eeb8310953674000829413dcaad9894151949a70ec52b48dac9eddbcfd7e8fdcb5161e6ecb2d4e4e4b50f755f98a3c5ffa325489b9ab39084a9564d37e302818047f5087b21a42099541404a55783732fece76ebd4c9374a206b47c62377c59ee1c6c0cfe098cd59a2a695c1a61465fca6a41185e23cddddcd27818af0699b3f75acb74a7ae5f7b332ab2e76baf7d1098f162720b3fb580900f0ea8f9a3f3c008b617e54e4aaadfaed0086a5752abb84bf95036d5d281f9c0fd5203978cf77e4f028181009b29e83640d4b6aa13c81bd79aa890d13aec66c5bff4eddece05cb60320c55bca86a5bd856e364b2809e7d7f2cf94231416927dc39d7f88242b211ac15a38e7fabaca6210537ed1e2f178096f59dc27da21bc09a7b2dc1d5cc7d3bb28fc736c66e6ba19609208b254e4c782462673936445892f4a21a2cfe2066776fe255ce89'
);

INSERT INTO private_key_identity (
  private_key, identity
) VALUES (
  1, 5 
);

INSERT INTO private_key_identity (
  private_key, identity
) VALUES (
  1, 6 
);

/* Configurations */

INSERT INTO ike_configs (
  local, remote
) VALUES (
  'PH_IP_SUN', 'PH_IP_MOON'
);

INSERT INTO peer_configs (
<<<<<<< HEAD
  name, ike_cfg, local_id, remote_id, mobike
) VALUES (
  'net-net', 1, 5, 4, 0
=======
  name, ike_cfg, local_id, remote_id, mobike, dpd_delay
) VALUES (
  'net-net', 1, 5, 4, 0, 0
>>>>>>> upstream/4.5.1
);

INSERT INTO child_configs (
  name, updown
) VALUES (
  'net-net', 'ipsec _updown iptables'
);

INSERT INTO peer_config_child_config (
  peer_cfg, child_cfg
) VALUES (
  1, 1
);

INSERT INTO traffic_selectors (
  type, start_addr, end_addr
) VALUES (
  7, X'0a010000', X'0a01ffff'
);

INSERT INTO traffic_selectors (
  type, start_addr, end_addr
) VALUES (
  7, X'0a020000', X'0a02ffff'
);

INSERT INTO child_config_traffic_selector (
  child_cfg, traffic_selector, kind
) VALUES (
  1, 2, 0
);

INSERT INTO child_config_traffic_selector (
	child_cfg, traffic_selector, kind
) VALUES (
  1, 1, 1
);

