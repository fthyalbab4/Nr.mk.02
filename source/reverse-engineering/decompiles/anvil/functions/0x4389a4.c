// rea decompile_all
// name: FUN_004389a4
// address: 0x4389a4
// body: available
// range: 0x4389a4-0x438a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4389b8 (push 0x438a20 followed by fs-segment stack chaining); handler 0x438a20 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004389a4(undefined **param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00438a20;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &stack0xfffffffc;
  if ((param_1 != &PTR_FUN_00435a84) &&
     (puVar2 = &stack0xfffffffc, param_1 != *(undefined ***)(param_4 + -8))) {
    FUN_00405f68(param_1);
    FUN_004389a4();
    FUN_00405eb4(param_1,&local_8,param_4);
    uVar1 = local_8;
    FUN_00409ea0(param_1);
    uVar3 = FUN_00409ef0();
    FUN_0043883c(uVar1,uVar3,param_4 + -4);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00438a27;
  puStack_18 = (undefined1 *)0x438a1f;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar2);
  return;
}
