// rea decompile_all
// name: FUN_0049f35c
// address: 0x49f35c
// body: available
// range: 0x49f35c-0x49f409 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49f379 (push 0x49f40a followed by fs-segment stack chaining); handler 0x49f40a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f35c(undefined4 *param_1,int param_2)

{
  HWND hWnd;
  undefined1 *puVar1;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0049f40a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_2 != param_1[4]) {
    puVar1 = &stack0xfffffffc;
    if ((int)param_1[3] < param_2) {
      FUN_00405eb4(*param_1,&local_10);
      local_c = local_10;
      local_8 = 0x11;
      puVar3 = &local_c;
      uVar2 = 0;
      FUN_0040b9d0(PTR_LAB_00688d00,&local_14);
      FUN_0041bd88(&LAB_0042dc24,1,local_14,uVar2,puVar3);
      FUN_00406ab4();
      param_2 = extraout_EDX;
      puVar1 = puStack_20;
    }
    puStack_20 = puVar1;
    param_1[4] = param_2;
    hWnd = *(HWND *)(param_1[1] + 0x68);
    puVar1 = puStack_20;
    if ((hWnd != (HWND)0x0) && ((*(byte *)(param_1[1] + 0x5d) & 4) == 0)) {
      SendMessageW(hWnd,0x469,0,CONCAT22(*(undefined2 *)(param_1 + 3),*(undefined2 *)(param_1 + 4)))
      ;
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0049f411;
  puStack_24 = (undefined1 *)0x49f409;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  return;
}
