// rea decompile_all
// name: FUN_0055f9e4
// address: 0x55f9e4
// body: available
// range: 0x55f9e4-0x55fac0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55fa16 (push 0x55fac1 followed by fs-segment stack chaining); handler 0x55fac1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055f9e4(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  cVar1 = *PTR_DAT_00688b54;
  if (cVar1 != '\0') {
    puStack_1c = (undefined1 *)0x55fa0b;
    FUN_005468a4(*(undefined4 *)(param_1 + 8));
  }
  puStack_20 = &LAB_0055fac1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = CONCAT31((int3)((uint)unaff_EBX >> 8),((byte)DAT_00686324 & 8) != 0) ^ 1;
    puStack_1c = &stack0xfffffffc;
    uVar4 = FUN_0055b0fc(&PTR_LAB_00557ee0,1,0,uVar6);
    if ((char)uVar6 != '\0') {
      FUN_00409e08(param_1 + 4,&DAT_0055722c);
      cVar3 = FUN_00557c6c();
      if ((cVar3 != '\0') && (iVar5 = FUN_00409c3c(*(undefined4 *)(param_1 + 4)), -1 < iVar5)) {
        iVar5 = iVar5 + 1;
        iVar7 = 0;
        do {
          FUN_0055b158(uVar4,*(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4),1);
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if (((byte)DAT_00686324 & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0xc) = uVar4;
    }
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0055fac8;
  if (cVar1 != '\0') {
    puStack_20 = (undefined1 *)0x55fac0;
    FUN_005468b0(*(undefined4 *)(param_1 + 8),uStack_24,puVar2);
  }
  return;
}
