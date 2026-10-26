// rea decompile_all
// name: FUN_006f5098
// address: 0x6f5098
// body: available
// range: 0x6f5098-0x6f518a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f50b0 (push 0x6f518b followed by fs-segment stack chaining); handler 0x6f518b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f5098(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined4 *in_stack_ffffffd8;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_006f518b;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_20;
  puVar1 = &stack0xfffffffc;
  if ((((*PTR_DAT_007822d8 == '\0') &&
       (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x408) != '\0')) &&
      (puVar1 = &stack0xfffffffc, *PTR_DAT_00781980 != '\0')) &&
     (puVar1 = &stack0xfffffffc, *(int *)(param_1 + 0x2b8) != 1)) {
    in_stack_ffffffd8 = &local_8;
    FUN_006f5920(*(undefined4 *)(param_1 + 0x40c),&local_c,param_3,in_stack_ffffffd8,1);
    FUN_0041e164(L"Save the changes to sprite \\1?",&DAT_006f51a8,local_c);
    iVar2 = FUN_004d437c(local_8,0,0xb,0,0xffffffff,0xffffffff,0);
    if (iVar2 == 2) {
      *param_3 = 0;
      goto LAB_006f5170;
    }
    puVar1 = puStack_18;
    if (iVar2 == 7) {
      FUN_005b33a8(*(undefined4 *)(param_1 + 0x3fc),*(undefined4 *)(param_1 + 0x400));
      FUN_006f5980(*(undefined4 *)(param_1 + 0x40c),*(undefined4 *)(param_1 + 0x404));
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  *param_3 = 2;
  FUN_00405a7c(*(undefined4 *)(param_1 + 0x400));
  FUN_006f5bf8(*(undefined4 *)(param_1 + 0x40c));
LAB_006f5170:
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)in_stack_ffffffd8;
  puStack_20 = &LAB_006f5192;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
