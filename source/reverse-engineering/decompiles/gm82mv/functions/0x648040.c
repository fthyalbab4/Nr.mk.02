// rea decompile_all
// name: FUN_00648040
// address: 0x648040
// body: available
// range: 0x648040-0x64829a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648040(void)

{
  FUN_0058917c(L"mplay_init_ipx",FUN_0064788c,0,1);
  FUN_0058917c(L"mplay_init_tcpip",FUN_006478b0,1,1);
  FUN_0058917c(L"mplay_init_modem",FUN_00647918,2,1);
  FUN_0058917c(L"mplay_init_serial",&LAB_00647998,5,1);
  FUN_0058917c(L"mplay_connect_status",FUN_006479f0,0,1);
  FUN_0058917c(L"mplay_end",&LAB_00647a0c,0,1);
  FUN_0058917c(L"mplay_session_mode",FUN_00647a18,1,1);
  FUN_0058917c(L"mplay_session_create",FUN_00647a40,3,1);
  FUN_0058917c(L"mplay_session_find",FUN_00647ac8,0,1);
  FUN_0058917c(L"mplay_session_name",&LAB_00647aec,1,1);
  FUN_0058917c(L"mplay_session_join",FUN_00647b50,2,1);
  FUN_0058917c(L"mplay_session_status",FUN_00647bc4,0,1);
  FUN_0058917c(L"mplay_session_end",&LAB_00647be0,0,1);
  FUN_0058917c(L"mplay_player_find",FUN_00647bec,0,1);
  FUN_0058917c(L"mplay_player_name",&LAB_00647c10,1,1);
  FUN_0058917c(L"mplay_player_id",FUN_00647c74,1,1);
  FUN_0058917c(L"mplay_data_write",FUN_00647ca0,2,1);
  FUN_0058917c(L"mplay_data_read",FUN_00647cd4,1,1);
  FUN_0058917c(L"mplay_data_mode",&LAB_00647cf0,1,1);
  FUN_0058917c(L"mplay_message_send",FUN_00647d18,3,1);
  FUN_0058917c(L"mplay_message_send_guaranteed",&LAB_00647dc0,3,1);
  FUN_0058917c(L"mplay_message_receive",&LAB_00647e68,1,1);
  FUN_0058917c(L"mplay_message_id",FUN_00647ef4,0,1);
  FUN_0058917c(L"mplay_message_value",&LAB_00647f18,0,1);
  FUN_0058917c(L"mplay_message_player",FUN_00647f28,0,1);
  FUN_0058917c(L"mplay_message_name",&LAB_00647f4c,0,1);
  FUN_0058917c(L"mplay_message_count",FUN_00647fa4,1,1);
  FUN_0058917c(L"mplay_message_clear",FUN_00647fd0,1,1);
  FUN_0058917c(L"mplay_ipaddress",FUN_00647fe8,0,1);
  return;
}
