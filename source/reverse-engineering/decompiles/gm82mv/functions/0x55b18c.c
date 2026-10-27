// rea decompile_all
// name: FUN_0055b18c
// address: 0x55b18c
// body: available
// range: 0x55b18c-0x55b22d inclusive
// range: 0x55b235-0x55b23a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55b1d9 (push 0x55b22e followed by fs-segment stack chaining); handler 0x55b22e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055b18c(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  if (*(char *)(param_1 + 0x15) != '\0') {
    for (puVar1 = *(undefined4 **)PTR_DAT_00689410; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      puStack_18 = (undefined1 *)0x55b1b7;
      FUN_0055b23c(param_1,puVar1[1],1);
    }
    return;
  }
  puStack_18 = (undefined1 *)0x55b1cb;
  piVar3 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  puStack_1c = &LAB_0055b22e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  DVar4 = GetCurrentProcessId();
  FUN_0053f610(piVar3,DVar4,1);
  iVar5 = (**(code **)(*piVar3 + 0x14))();
  if (-1 < iVar5 + -1) {
    iVar7 = 0;
    do {
      uVar6 = (**(code **)(*piVar3 + 0x18))(piVar3,iVar7);
      FUN_0055b23c(param_1,uVar6,0);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x55b235;
  puStack_1c = (undefined1 *)0x55b22d;
  FUN_00405fdc(piVar3,uStack_20,puVar2);
  return;
}
