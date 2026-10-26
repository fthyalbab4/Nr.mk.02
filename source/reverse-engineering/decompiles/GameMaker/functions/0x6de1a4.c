// rea decompile_all
// name: FUN_006de1a4
// address: 0x6de1a4
// body: available
// range: 0x6de1a4-0x6de2e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6de1c6 (push 0x6de2e1 followed by fs-segment stack chaining); handler 0x6de2e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de1a4(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = (undefined1 *)0x6de1bb;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_28 = &LAB_006de2e1;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  cVar3 = FUN_006de094(local_8);
  if (cVar3 == '\0') {
    FUN_006de190();
  }
  else {
    FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_10);
    FUN_0041735c(local_10,&local_c);
    pwVar9 = L"Tutorials\\";
    puVar7 = &DAT_006de320;
    uVar8 = local_8;
    uVar10 = local_c;
    FUN_00408480(&DAT_00790108,4);
    FUN_004ee5c0(*(undefined4 *)(DAT_00790100 + 0x5fc),1);
    FUN_006de324(DAT_00790100,*(undefined4 *)(DAT_00790100 + 0x5fc));
    iVar4 = **(int **)(DAT_00790100 + 0x60c);
    (**(code **)(iVar4 + 0xf0))
              (*(int **)(DAT_00790100 + 0x60c),*PTR_DAT_00782624,iVar4,puVar7,uVar8,pwVar9,uVar10);
    iVar4 = (**(code **)(**(int **)(*(int *)(DAT_00790100 + 0x618) + 0x2ac) + 0x14))();
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      uVar6 = true;
      do {
        piVar1 = *(int **)(*(int *)(DAT_00790100 + 0x618) + 0x2ac);
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar5,&local_14);
        FUN_00408640(local_8,local_14);
        if ((bool)uVar6) {
          (**(code **)(**(int **)(DAT_00790100 + 0x618) + 0xf0))
                    (*(int **)(DAT_00790100 + 0x618),iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
        uVar6 = iVar4 == 0;
      } while (!(bool)uVar6);
    }
    FUN_006ddc10(1);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006de2e8;
  puStack_28 = (undefined1 *)0x6de2e0;
  thunk_FUN_00406e80(&local_14,4,puVar2);
  return;
}
