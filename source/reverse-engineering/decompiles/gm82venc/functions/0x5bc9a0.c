// rea decompile_all
// name: FUN_005bc9a0
// address: 0x5bc9a0
// body: available
// range: 0x5bc9a0-0x5bcaa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc9b4 (push 0x5bcaa1 followed by fs-segment stack chaining); handler 0x5bcaa1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bc9a0(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005bcaa1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if ((*PTR_DAT_00688de8 != '\0') && (puVar2 = &stack0xfffffffc, DAT_0084f054 != 0)) {
    FUN_0041636c(*(undefined4 *)PTR_DAT_0068892c,&local_8);
    FUN_004085b8(&local_8,L" fps");
    uVar1 = local_8;
    uVar3 = FUN_0048b9b8(*(undefined4 *)(*(int *)(DAT_0084f054 + 0x3a8) + 0x270),0);
    FUN_0048b914(uVar3,uVar1);
    FUN_0041636c(*(undefined4 *)(*(int *)PTR_DAT_0068939c + 0x68),&local_c);
    FUN_004085b8(&local_c,L" inst");
    uVar1 = local_c;
    uVar3 = FUN_0048b9b8(*(undefined4 *)(*(int *)(DAT_0084f054 + 0x3a8) + 0x270),1);
    FUN_0048b914(uVar3,uVar1);
    FUN_005bc884();
    FUN_005bc328();
    FUN_005baf80();
    if (-1 < DAT_00687534 + -1) {
      puVar4 = &DAT_0084f05c;
      iVar5 = DAT_00687534;
      do {
        FUN_005bb660(puVar4);
        puVar4 = puVar4 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_005bc028();
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005bcaa8;
  puStack_1c = (undefined1 *)0x5bcaa0;
  thunk_FUN_004072fc(&local_c,2,puVar2);
  return;
}
