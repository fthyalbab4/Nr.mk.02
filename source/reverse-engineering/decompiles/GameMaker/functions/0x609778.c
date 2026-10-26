// rea decompile_all
// name: FUN_00609778
// address: 0x609778
// body: available
// range: 0x609778-0x609815 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x609795 (push 0x609833 followed by fs-segment stack chaining); handler 0x609833 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6097b9 (push 0x609816 followed by fs-segment stack chaining); handler 0x609816 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00609778(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_00609833;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x60979f;
  FUN_006099d0(param_1);
  puStack_28 = (undefined1 *)0x6097ab;
  local_c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_2c = &LAB_00609816;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  do {
    (**(code **)(**(int **)(param_1 + 0x98) + 0xb4))
              (*(int **)(param_1 + 0x98),0x7fffffff,param_2,&local_8);
    (**(code **)(*local_c + 0x38))(local_c,local_8);
    cVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x38))(**(int **)(param_1 + 0x9c),local_8);
  } while (cVar2 == '\0');
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(*(int **)(param_1 + 0x9c),local_c);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0060981d;
  puStack_2c = (undefined1 *)0x609815;
  FUN_0041ef80(&local_c,uStack_30,puVar1);
  return;
}
