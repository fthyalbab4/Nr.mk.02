// rea decompile_all
// name: FUN_00594ac8
// address: 0x594ac8
// body: available
// range: 0x594ac8-0x594b22 inclusive
// range: 0x594b53-0x594ca0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00594ac8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_8 = param_4;
  cVar1 = FUN_005941c4(param_1,param_3,&local_c);
  if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 200) + 4 + local_c * 0xc) == 1)) {
    switch(*(undefined2 *)(*(int *)(param_1 + 200) + 2 + local_c * 0xc)) {
    case 1:
      break;
    case 3:
    case 8:
      break;
    case 4:
    case 9:
      break;
    case 5:
    case 10:
      FUN_0043f254(param_2,0,local_c * 3,
                   *(int *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc) + *(int *)(param_1 + 0xac),
                   0);
      FUN_0043f488(param_2,&local_18,4);
      FUN_0043f488(param_2,&local_1c,4);
      if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
        local_18 = FUN_00592f20(local_18);
        FUN_00592f20(local_1c);
      }
      break;
    case 0xb:
      FUN_0043f254(param_2,0,local_c * 3,
                   *(int *)(*(int *)(param_1 + 200) + 8 + local_c * 0xc) + *(int *)(param_1 + 0xac),
                   0);
      FUN_0043f488(param_2,&local_10,4);
      FUN_0043f488(param_2,&local_14,4);
      if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
        local_10 = FUN_00592f20(local_10);
        FUN_00592f20(local_14);
      }
    }
  }
  return;
}
