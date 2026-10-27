// rea decompile_all
// name: FUN_004ae4ec
// address: 0x4ae4ec
// body: available
// range: 0x4ae4ec-0x4ae56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae4ec(int param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 *param_5
                 )

{
  undefined4 uVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [14];

  bVar4 = 0;
  FUN_004aebe0(param_1);
  if (param_4 == '\0') {
    local_40 = 0xffff0001;
    uVar1 = local_40;
  }
  else if (param_4 == '\x01') {
    local_40 = 0xffff0002;
    uVar1 = local_40;
  }
  else {
    uVar1 = param_3;
    if (param_4 != '\x02') {
      uVar1 = local_40;
    }
  }
  local_40 = uVar1;
  puVar3 = local_3c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_5;
    param_5 = param_5 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_44 = param_2;
  FUN_0048e1e4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3a0),0);
  hWnd = (HWND)FUN_004ae118(param_1);
  SendMessageW(hWnd,0x1132,0,(LPARAM)&local_44);
  return;
}
