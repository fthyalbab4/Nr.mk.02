// rea decompile_all
// name: FUN_00492490
// address: 0x492490
// body: available
// range: 0x492490-0x4925d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4924ab (push 0x4925d3 followed by fs-segment stack chaining); handler 0x4925d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492490(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_004925d3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar2 = FUN_00405c98(param_1[4],&PTR_FUN_00490648);
  if (cVar2 != '\0') {
    piVar3 = (int *)param_1[8];
    cVar2 = FUN_00405c98(piVar3,&PTR_LAB_004e9718);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0xf8))();
    }
    piVar3 = (int *)param_1[4];
    cVar2 = FUN_00405c98(piVar3,&PTR_FUN_004912d4);
    if (cVar2 == '\0') {
      cVar2 = FUN_00405c98(piVar3,&PTR_FUN_00490bc0);
      if ((cVar2 != '\0') && (local_14 = (**(code **)(*piVar3 + 0x58))(), -1 < local_14 + -1)) {
        iVar5 = 0;
        do {
          uVar4 = FUN_00405cbc(param_1[4],&PTR_FUN_00490bc0);
          cVar2 = FUN_00491e4c(uVar4,iVar5,&local_8,&local_10,&local_c);
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0xac))(param_1,local_8,local_c,local_10);
          }
          iVar5 = iVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else {
      piVar3 = (int *)FUN_00405cbc(piVar3,&PTR_FUN_004912d4);
      local_14 = (**(code **)(*piVar3 + 0x58))();
      if (-1 < local_14 + -1) {
        iVar5 = 0;
        do {
          uVar4 = FUN_00491a08(piVar3[0x34],iVar5);
          cVar2 = FUN_004922d8(piVar3,iVar5,uVar4);
          if (cVar2 != '\0') {
            uVar4 = FUN_00491a08(piVar3[0x34],iVar5);
            (**(code **)(*param_1 + 0xa8))(param_1,uVar4);
          }
          iVar5 = iVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004925da;
  puStack_28 = (undefined1 *)0x4925d2;
  thunk_FUN_00406e5c(&local_8,uStack_2c,puVar1);
  return;
}
