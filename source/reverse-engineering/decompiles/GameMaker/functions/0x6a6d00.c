// rea decompile_all
// name: FUN_006a6d00
// address: 0x6a6d00
// body: available
// range: 0x6a6d00-0x6a6e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a6d00(void)

{
  FUN_00696ed4(L"mplay_init_ipx",0);
  FUN_00696ed4(L"mplay_init_tcpip",1);
  FUN_00696ed4(L"mplay_init_modem",2);
  FUN_00696ed4(L"mplay_init_serial",5);
  FUN_00696ed4(L"mplay_connect_status",0);
  FUN_00696ed4(L"mplay_end",0);
  FUN_00696ed4(L"mplay_session_mode",1);
  FUN_00696ed4(L"mplay_session_create",3);
  FUN_00696ed4(L"mplay_session_find",0);
  FUN_00696ed4(L"mplay_session_name",1);
  FUN_00696ed4(L"mplay_session_join",2);
  FUN_00696ed4(L"mplay_session_status",0);
  FUN_00696ed4(L"mplay_session_end",0);
  FUN_00696ed4(L"mplay_player_find",0);
  FUN_00696ed4(L"mplay_player_name",1);
  FUN_00696ed4(L"mplay_player_id",1);
  FUN_00696ed4(L"mplay_data_write",2);
  FUN_00696ed4(L"mplay_data_read",1);
  FUN_00696ed4(L"mplay_data_mode",1);
  FUN_00696ed4(L"mplay_message_send",3);
  FUN_00696ed4(L"mplay_message_send_guaranteed",3);
  FUN_00696ed4(L"mplay_message_receive",1);
  FUN_00696ed4(L"mplay_message_id",0);
  FUN_00696ed4(L"mplay_message_value",0);
  FUN_00696ed4(L"mplay_message_player",0);
  FUN_00696ed4(L"mplay_message_name",0);
  FUN_00696ed4(L"mplay_message_count",1);
  FUN_00696ed4(L"mplay_message_clear",1);
  FUN_00696ed4(L"mplay_ipaddress",0);
  return;
}
