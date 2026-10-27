// rea decompile_all
// name: FUN_0044959c
// address: 0x44959c
// body: available
// range: 0x44959c-0x449674 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4495ba (push 0x449675 followed by fs-segment stack chaining); handler 0x449675 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044959c(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_00449675;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  iVar2 = FUN_00405a4c(&DAT_00449530,1);
  iVar4 = iVar2;
  if (iVar2 != 0) {
    iVar4 = iVar2 + 8;
  }
  FUN_0040b158(&local_8,iVar4);
  if ((local_c != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      FUN_0043b328(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 8);
      if (-1 < iVar4 + -1) {
        local_10 = 0;
        do {
          uVar3 = FUN_0043b048(*(undefined4 *)(param_1 + 0x10),local_10);
          FUN_0043b1f4(*(undefined4 *)(param_1 + 0x28),local_10,uVar3);
          local_10 = local_10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar2 != 0) {
        iVar2 = iVar2 + 0xc;
      }
      FUN_0043b648(*(undefined4 *)(param_1 + 0x28),iVar2);
    }
    FUN_00449688(param_1,local_c,&local_10);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0044967c;
  puStack_24 = (undefined1 *)0x449674;
  FUN_0040b140(&local_8,uStack_28,puVar1);
  return;
}
