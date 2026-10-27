// rea decompile_all
// name: FUN_0066175c
// address: 0x66175c
// body: available
// range: 0x66175c-0x661819 inclusive
// range: 0x661821-0x661825 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6617b1 (push 0x66181a followed by fs-segment stack chaining); handler 0x66181a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066175c(int *param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  *(undefined1 *)((int)param_1 + 0x319) = 1;
  if (param_2 != '\0') {
    *(char *)(param_1[0xcf] + 0x319) = param_2;
  }
  *(undefined1 *)(param_1 + 0xc6) = 0;
  puStack_14 = (undefined1 *)0x661794;
  cVar3 = FUN_00676810(param_1);
  if (cVar3 != '\0') {
    *(short *)(param_1 + 0x6b) = (short)param_1[0x6b] + 1;
    puStack_18 = &LAB_0066181a;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    iVar4 = FUN_006767e4(param_1);
    iVar4 = *(int *)(*(int *)(iVar4 + 8) + 8);
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        uVar5 = FUN_006767e4(param_1);
        iVar6 = FUN_00672cc0(uVar5,iVar7);
        uVar1 = *(undefined1 *)(iVar6 + 0x30);
        uVar5 = FUN_006767e4(param_1);
        iVar6 = FUN_00672cc0(uVar5,iVar7);
        FUN_004ee5c0(*(undefined4 *)(iVar6 + 0x44),uVar1);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(*param_1 + 0x68))();
    puVar2 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x661821;
    puStack_18 = (undefined1 *)0x661819;
    FUN_004f2c1c(param_1,uStack_1c,puVar2);
    return;
  }
  return;
}
