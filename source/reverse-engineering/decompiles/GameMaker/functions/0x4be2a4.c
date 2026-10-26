// rea decompile_all
// name: FUN_004be2a4
// address: 0x4be2a4
// body: available
// range: 0x4be2a4-0x4be39e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4be2b9 (push 0x4be39f followed by fs-segment stack chaining); handler 0x4be39f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be2a4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004be39f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    uVar3 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
    FUN_00409be0(&local_8,&DAT_004be270,1,uVar3);
    iVar4 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        iVar5 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar6);
        *(undefined4 *)(local_8 + iVar6 * 4) = *(undefined4 *)(iVar5 + 0x2c);
        uVar3 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar6);
        FUN_004b8c54(uVar3,0xffffffff);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3f8) + 8) + 8);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        FUN_004be3ac(param_1,iVar6);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        uVar3 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar6);
        FUN_004b8c54(uVar3,*(undefined4 *)(local_8 + iVar6 * 4));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004be3a6;
  puStack_1c = (undefined1 *)0x4be39e;
  FUN_00409ce0(&local_8,&DAT_004be270,puVar1);
  return;
}
