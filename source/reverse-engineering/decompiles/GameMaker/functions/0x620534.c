// rea decompile_all
// name: FUN_00620534
// address: 0x620534
// body: available
// range: 0x620534-0x62124f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00620534(void)

{
  int iVar1;
  bool bVar2;

  bVar2 = true;
  if (DAT_0078a0b8 == (int *)0x0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSLHeaders.pas",0x2d3e);
  }
  (**(code **)(*DAT_0078a0b8 + 0x44))();
  iVar1 = DAT_0077f064;
  if ((DAT_0077f064 == 0) && (iVar1 = FUN_0041f0a0(L"libeay32.dll",0x8000), iVar1 < 0)) {
    iVar1 = thunk_FUN_00404478();
  }
  DAT_0077f064 = iVar1;
  if (DAT_0077f060 == 0) {
    iVar1 = FUN_0041f0a0(L"ssleay32.dll",0x8000);
    if (iVar1 < 0) {
      iVar1 = thunk_FUN_00404478();
    }
    if ((iVar1 == 0) &&
       (DAT_0077f060 = iVar1, iVar1 = FUN_0041f0a0(L"libssl32.dll",0x8000), iVar1 < 0)) {
      iVar1 = thunk_FUN_00404478();
    }
    DAT_0077f060 = iVar1;
    DAT_0077eea0 = FUN_0062044c(L"SSL_CTX_set_cipher_list",1);
    DAT_0077eea4 = FUN_0062044c(L"SSL_CTX_new",1);
    DAT_0077eea8 = FUN_0062044c(L"SSL_CTX_free",1);
    DAT_0077eeac = FUN_0062044c(L"SSL_set_fd",1);
    DAT_0077eeb0 = FUN_0062044c(L"SSL_CTX_use_PrivateKey_file",1);
    _DAT_0077eeb4 = FUN_0062044c(L"SSL_CTX_use_PrivateKey",1);
    _DAT_0077eeb8 = FUN_0062044c(L"SSL_CTX_use_certificate",1);
    DAT_0077eebc = FUN_0062044c(L"SSL_CTX_use_certificate_file",1);
    DAT_0077eec0 = FUN_0062044c(L"SSL_load_error_strings",1);
    DAT_0077eec4 = FUN_0062044c(L"SSL_state_string_long",1);
    DAT_0077eec8 = FUN_0062044c(L"SSL_get_peer_certificate",1);
    DAT_0077eecc = FUN_0062044c(L"SSL_CTX_set_verify",1);
    DAT_0077eed0 = FUN_0062044c(L"SSL_CTX_set_verify_depth",1);
    _DAT_0077eed4 = FUN_0062044c(L"SSL_CTX_get_verify_depth",1);
    DAT_0077eed8 = FUN_0062044c(L"SSL_CTX_set_default_passwd_cb",1);
    DAT_0077eedc = FUN_0062044c(L"SSL_CTX_set_default_passwd_cb_userdata",1);
    DAT_0077eee0 = FUN_0062044c(L"SSL_CTX_check_private_key",1);
    DAT_0077eee4 = FUN_0062044c(L"SSL_new",1);
    DAT_0077eee8 = FUN_0062044c(L"SSL_free",1);
    DAT_0077eeec = FUN_0062044c(L"SSL_accept",1);
    DAT_0077eef0 = FUN_0062044c(L"SSL_connect",1);
    DAT_0077eef4 = FUN_0062044c(L"SSL_read",1);
    _DAT_0077eef8 = FUN_0062044c(L"SSL_peek",1);
    _DAT_0078a0b0 = FUN_0062044c(L"SSL_pending",1);
    DAT_0077eefc = FUN_0062044c(L"SSL_write",1);
    _DAT_0077ef04 = FUN_0062044c(L"SSL_ctrl",1);
    _DAT_0077ef08 = FUN_0062044c(L"SSL_callback_ctrl",1);
    DAT_0077ef00 = FUN_0062044c(L"SSL_CTX_ctrl",1);
    _DAT_0077ef0c = FUN_0062044c(L"SSL_CTX_callback_ctrl",1);
    DAT_0077ef10 = FUN_0062044c(L"SSL_get_error",1);
    DAT_0077ef14 = FUN_0062044c(L"SSLv2_method",1);
    DAT_0077ef18 = FUN_0062044c(L"SSLv2_server_method",1);
    DAT_0077ef1c = FUN_0062044c(L"SSLv2_client_method",1);
    DAT_0077ef20 = FUN_0062044c(L"SSLv3_method",1);
    DAT_0077ef24 = FUN_0062044c(L"SSLv3_server_method",1);
    DAT_0077ef28 = FUN_0062044c(L"SSLv3_client_method",1);
    DAT_0077ef2c = FUN_0062044c(L"SSLv23_method",1);
    DAT_0077ef30 = FUN_0062044c(L"SSLv23_server_method",1);
    DAT_0077ef34 = FUN_0062044c(L"SSLv23_client_method",1);
    DAT_0077ef38 = FUN_0062044c(L"TLSv1_method",1);
    DAT_0077ef3c = FUN_0062044c(L"TLSv1_server_method",1);
    DAT_0077ef40 = FUN_0062044c(L"TLSv1_client_method",1);
    _DAT_0077ef44 = FUN_0062044c(L"DTLSv1_method",0);
    _DAT_0077ef48 = FUN_0062044c(L"DTLSv1_server_method",0);
    _DAT_0077ef4c = FUN_0062044c(L"DTLSv1_client_method",0);
    DAT_0077ef50 = FUN_0062044c(L"SSL_shutdown",1);
    _DAT_0077ef54 = FUN_0062044c(L"SSL_set_connect_state",1);
    _DAT_0077ef58 = FUN_0062044c(L"SSL_set_accept_state",1);
    _DAT_0077ef5c = FUN_0062044c(L"SSL_set_shutdown",1);
    DAT_0077ef60 = FUN_0062044c(L"SSL_CTX_load_verify_locations",1);
    DAT_0077ef64 = FUN_0062044c(L"SSL_get_session",1);
    DAT_0077ef68 = FUN_0062044c(L"SSL_library_init",1);
    DAT_0077ef6c = FUN_0062044c(L"SSL_SESSION_get_id",0);
    _DAT_0077ed90 = FUN_0062048c(L"SSLeay_version",1);
    _DAT_0078a0ac = FUN_0062048c(L"SSLeay",1);
    _DAT_0077ef70 = FUN_0062048c(L"X509_NAME_oneline",1);
    _DAT_0077ef74 = FUN_0062048c(L"X509_NAME_hash",1);
    _DAT_0077ef78 = FUN_0062048c(L"X509_set_issuer_name",1);
    _DAT_0077ef7c = FUN_0062048c(L"X509_get_issuer_name",1);
    _DAT_0077ef80 = FUN_0062048c(L"X509_set_subject_name",1);
    _DAT_0077ef84 = FUN_0062048c(L"X509_get_subject_name",1);
    DAT_0077ef98 = FUN_0062048c(L"X509_digest",1);
    DAT_0077efb8 = FUN_0062048c(L"X509_STORE_CTX_get_ex_data",1);
    DAT_0077efbc = FUN_0062048c(L"X509_STORE_CTX_get_error",1);
    _DAT_0077efc0 = FUN_0062048c(L"X509_STORE_CTX_set_error",1);
    DAT_0077efc4 = FUN_0062048c(L"X509_STORE_CTX_get_error_depth",1);
    DAT_0077efc8 = FUN_0062048c(L"X509_STORE_CTX_get_current_cert",1);
    _DAT_0077ee7c = FUN_0062048c(L"X509_sign",1);
    _DAT_0077ee80 = FUN_0062048c(L"X509_REQ_sign",1);
    _DAT_0077ee84 = FUN_0062048c(L"X509_REQ_add_extensions",1);
    _DAT_0077ee88 = FUN_0062048c(L"X509V3_EXT_conf_nid",1);
    _DAT_0077ee8c = FUN_0062048c(L"X509_EXTENSION_create_by_NID",1);
    _DAT_0077ee90 = FUN_0062048c(L"X509V3_set_ctx",1);
    _DAT_0077ee94 = FUN_0062048c(L"X509_EXTENSION_free",1);
    _DAT_0077ee98 = FUN_0062048c(L"X509_add_ext",1);
    _DAT_0077ee9c = FUN_0062048c(L"X509_print",0);
    DAT_0077f068 = FUN_0062048c(L"RAND_screen",1);
    _DAT_0077efd4 = FUN_0062048c(L"DES_set_odd_parity",1);
    _DAT_0077efd8 = FUN_0062048c(L"DES_set_key",1);
    _DAT_0077efdc = FUN_0062048c(L"DES_ecb_encrypt",1);
    _DAT_0077efe0 = FUN_006204cc(L"des_set_odd_parity",L"_ossl_old_des_set_odd_parity",1);
    _DAT_0077efe4 = FUN_006204cc(L"des_set_key",L"_ossl_old_des_set_key",1);
    _DAT_0077efe8 = FUN_006204cc(L"des_ecb_encrypt",L"_ossl_old_des_ecb_encrypt",1);
    DAT_0077efec = FUN_0062044c(L"SSL_set_ex_data",1);
    DAT_0077eff0 = FUN_0062044c(L"SSL_get_ex_data",1);
    DAT_0077f000 = FUN_0062044c(L"SSL_load_client_CA_file",1);
    DAT_0077f004 = FUN_0062044c(L"SSL_CTX_set_client_CA_list",1);
    DAT_0077f008 = FUN_0062044c(L"SSL_CTX_set_default_verify_paths",1);
    DAT_0077f00c = FUN_0062044c(L"SSL_CTX_set_session_id_context",1);
    DAT_0077f010 = FUN_0062044c(L"SSL_CIPHER_description",1);
    DAT_0077f014 = FUN_0062044c(L"SSL_get_current_cipher",1);
    DAT_0077f018 = FUN_0062044c(L"SSL_CIPHER_get_name",1);
    DAT_0077f01c = FUN_0062044c(L"SSL_CIPHER_get_version",1);
    DAT_0077f020 = FUN_0062044c(L"SSL_CIPHER_get_bits",1);
    DAT_0077efcc = FUN_0062048c(L"CRYPTO_num_locks",1);
    DAT_0077efd0 = FUN_0062048c(L"CRYPTO_set_locking_callback",1);
    DAT_0077f028 = FUN_0062048c(L"ERR_get_error",1);
    _DAT_0077f02c = FUN_0062048c(L"ERR_peek_error",1);
    _DAT_0077f030 = FUN_0062048c(L"ERR_clear_error",1);
    DAT_0077f034 = FUN_0062048c(L"ERR_error_string",1);
    _DAT_0077f024 = FUN_0062048c(L"ERR_error_string_n",1);
    _DAT_0077f038 = FUN_0062048c(L"ERR_lib_error_string",1);
    _DAT_0077f03c = FUN_0062048c(L"ERR_func_error_string",1);
    _DAT_0077f040 = FUN_0062048c(L"ERR_reason_error_string",1);
    _DAT_0077f044 = FUN_0062048c(L"ERR_load_ERR_strings",1);
    _DAT_0077f048 = FUN_0062048c(L"ERR_load_CRYPTO_strings",1);
    _DAT_0077f04c = FUN_0062048c(L"ERR_free_strings",1);
    _DAT_0077f050 = FUN_0062048c(L"ERR_remove_state",1);
    _DAT_0077f054 = FUN_0062048c(L"CRYPTO_cleanup_all_ex_data",1);
    _DAT_0077f058 = FUN_0062044c(L"SSL_COMP_get_compression_methods",1);
    _DAT_0077f05c = FUN_0062048c(L"sk_pop_free",1);
    _DAT_0077edb4 = FUN_0062048c(L"RSA_free",1);
    _DAT_0077edb8 = FUN_0062048c(L"RSA_generate_key",1);
    _DAT_0077edbc = FUN_0062048c(L"RSA_check_key",1);
    _DAT_0077edc0 = FUN_0062048c(L"BIO_new",1);
    _DAT_0077edc4 = FUN_0062048c(L"BIO_free",1);
    _DAT_0077edc8 = FUN_0062048c(L"BIO_s_mem",1);
    _DAT_0077edcc = FUN_0062048c(L"BIO_s_file",1);
    _DAT_0077edd0 = FUN_0062048c(L"BIO_ctrl",1);
    _DAT_0077edd4 = FUN_0062048c(L"BIO_new_file",1);
    _DAT_0077edd8 = FUN_0062048c(L"BIO_puts",1);
    _DAT_0077eddc = FUN_0062048c(L"BIO_read",1);
    _DAT_0077ede0 = FUN_0062048c(L"BIO_write",1);
    _DAT_0077ee40 = FUN_0062048c(L"i2d_X509_bio",1);
    _DAT_0077ee44 = FUN_0062048c(L"i2d_PrivateKey_bio",1);
    _DAT_0077ee30 = FUN_0062048c(L"i2d_X509",1);
    _DAT_0077ee38 = FUN_0062048c(L"d2i_X509_bio",1);
    _DAT_0077ee34 = FUN_0062048c(L"d2i_X509",1);
    _DAT_0077ee3c = FUN_0062048c(L"i2d_X509_REQ_bio",1);
    _DAT_0077ee48 = FUN_0062048c(L"X509_new",1);
    DAT_0077ee4c = FUN_0062048c(L"X509_free",1);
    _DAT_0077ee50 = FUN_0062048c(L"X509_REQ_new",1);
    _DAT_0077ee54 = FUN_0062048c(L"X509_REQ_free",1);
    _DAT_0077ee58 = FUN_0062048c(L"X509_to_X509_REQ",1);
    _DAT_0077ee5c = FUN_0062048c(L"X509_NAME_add_entry_by_txt",1);
    _DAT_0077ee60 = FUN_0062048c(L"X509_set_version",1);
    _DAT_0077ee64 = FUN_0062048c(L"X509_get_serialNumber",1);
    _DAT_0077ee68 = FUN_0062048c(L"X509_gmtime_adj",1);
    _DAT_0077ee6c = FUN_0062048c(L"X509_set_notBefore",1);
    _DAT_0077ee70 = FUN_0062048c(L"X509_set_notAfter",1);
    _DAT_0077ee74 = FUN_0062048c(L"X509_set_pubkey",1);
    _DAT_0077ee78 = FUN_0062048c(L"X509_REQ_set_pubkey",1);
    _DAT_0077ede8 = FUN_0062048c(L"PEM_write_bio_PKCS8PrivateKey",1);
    _DAT_0077edec = FUN_0062048c(L"PEM_ASN1_write_bio",1);
    _DAT_0077edf0 = FUN_0062048c(L"PEM_ASN1_read_bio",1);
    _DAT_0077edf4 = FUN_0062048c(L"PEM_read_bio_PrivateKey",1);
    _DAT_0077ede4 = FUN_0062048c(L"PEM_write_bio_X509_REQ",1);
    _DAT_0077ee0c = FUN_0062048c(L"EVP_des_ede3_cbc",1);
    DAT_0077ef9c = FUN_0062048c(L"EVP_sha512",0);
    DAT_0077efa0 = FUN_0062048c(L"EVP_sha384",0);
    DAT_0077efa4 = FUN_0062048c(L"EVP_sha256",0);
    DAT_0077efa8 = FUN_0062048c(L"EVP_sha224",0);
    DAT_0077efac = FUN_0062048c(L"EVP_sha1",1);
    DAT_0077efb0 = FUN_0062048c(L"EVP_md5",1);
    _DAT_0077ee04 = FUN_0062048c(L"EVP_MD_CTX_init",1);
    _DAT_0077edf8 = FUN_0062048c(L"EVP_DigestInit_ex",1);
    _DAT_0077edfc = FUN_0062048c(L"EVP_DigestUpdate",1);
    _DAT_0077ee00 = FUN_0062048c(L"EVP_DigestFinal_ex",1);
    _DAT_0077ee08 = FUN_0062048c(L"EVP_MD_CTX_cleanup",1);
    _DAT_0077efb4 = FUN_0062048c(L"EVP_PKEY_type",1);
    _DAT_0077ee10 = FUN_0062048c(L"EVP_PKEY_new",1);
    _DAT_0077ee14 = FUN_0062048c(L"EVP_PKEY_free",1);
    _DAT_0077ee18 = FUN_0062048c(L"EVP_PKEY_assign",1);
    _DAT_0077ee1c = FUN_0062048c(L"EVP_get_digestbyname",1);
    _DAT_0077ef88 = FUN_0062048c(L"OBJ_obj2nid",1);
    _DAT_0077ef8c = FUN_0062048c(L"OBJ_nid2obj",1);
    _DAT_0077ef90 = FUN_0062048c(L"OBJ_nid2ln",1);
    _DAT_0077ef94 = FUN_0062048c(L"OBJ_nid2sn",1);
    _DAT_0077ee20 = FUN_0062048c(L"ASN1_INTEGER_set",1);
    _DAT_0077ee24 = FUN_0062048c(L"ASN1_INTEGER_get",1);
    _DAT_0077ee28 = FUN_0062048c(L"ASN1_STRING_type_new",1);
    _DAT_0077ee2c = FUN_0062048c(L"ASN1_STRING_free",1);
    _DAT_0077ed94 = FUN_0062048c(L"CRYPTO_set_mem_functions",1);
    _DAT_0077ed98 = FUN_0062048c(L"CRYPTO_malloc",1);
    _DAT_0077ed9c = FUN_0062048c(L"CRYPTO_free",1);
    _DAT_0077eda0 = FUN_0062048c(L"CRYPTO_mem_leaks",1);
    _DAT_0077eda4 = FUN_0062048c(L"CRYPTO_mem_ctrl",1);
    _DAT_0077eda8 = FUN_0062048c(L"CRYPTO_set_mem_debug_functions",1);
    _DAT_0077eff4 = FUN_0062048c(L"PKCS12_create",1);
    _DAT_0077eff8 = FUN_0062048c(L"i2d_PKCS12_bio",1);
    _DAT_0077effc = FUN_0062048c(L"PKCS12_free",1);
    DAT_0077ed84 = FUN_0062048c(L"OpenSSL_add_all_ciphers",1);
    DAT_0077ed88 = FUN_0062048c(L"OpenSSL_add_all_digests",1);
    _DAT_0077ed8c = FUN_0062048c(L"EVP_cleanup",1);
    _DAT_0077edac = FUN_0062048c(L"sk_new_null",1);
    _DAT_0077edb0 = FUN_0062048c(L"sk_push",1);
    iVar1 = (**(code **)(*DAT_0078a0b8 + 0x14))();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}
