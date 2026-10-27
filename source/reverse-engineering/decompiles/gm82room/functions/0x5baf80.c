// rea decompile_all
// name: FUN_005baf80
// address: 0x5baf80
// body: available
// range: 0x5baf80-0x5bb201 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5baf95 (push 0x5bb202 followed by fs-segment stack chaining); handler 0x5bb202 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005baf80(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined *in_stack_ffffffac;
  wchar_t *in_stack_ffffffb4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  wchar_t *pwVar8;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_005bb202;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if ((DAT_0068752c != 0) && (puVar1 = &stack0xfffffffc, *(char *)(DAT_0068752c + 0x59) != '\0')) {
    FUN_004081e8(&local_8,0);
    uVar2 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
    FUN_005baec0(&local_8,uVar2,L"mouse_x");
    FUN_005baec0(&local_8,uVar2,L"mouse_y");
    FUN_005baec0(&local_8,uVar2,L"mouse_button");
    FUN_005baec0(&local_8,uVar2,L"mouse_lastbutton");
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb2ac);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb2d4);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb304);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb334);
    pwVar8 = L"________________________________";
    puVar7 = &DAT_005bb3b0;
    puVar6 = &DAT_005bb3c0;
    uVar5 = local_8;
    FUN_0040875c(&local_8,4);
    FUN_005baec0(&local_8,uVar2,L"score",puVar6,puVar7,pwVar8,uVar5);
    FUN_005baec0(&local_8,uVar2,L"lives");
    FUN_005baec0(&local_8,uVar2,L"health");
    FUN_005baec0(&local_8,uVar2,L"room");
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb434);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb458);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb47c);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb4a0);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb4cc);
    pwVar8 = L"________________________________";
    puVar7 = &DAT_005bb3b0;
    puVar6 = &DAT_005bb3c0;
    uVar5 = local_8;
    FUN_0040875c(&local_8,4);
    FUN_005baec0(&local_8,uVar2,L"working_directory",puVar6,puVar7,pwVar8,uVar5);
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb524);
    FUN_005baec0(&local_8,uVar2,L"program_directory");
    FUN_005baec0(&local_8,uVar2,&PTR_DAT_005bb580);
    FUN_005baec0(&local_8,uVar2,L"error_occurred");
    FUN_005baec0(&local_8,uVar2,L"error_last");
    in_stack_ffffffb4 = L"________________________________";
    puVar6 = &DAT_005bb3b0;
    in_stack_ffffffac = &DAT_005bb3c0;
    uVar5 = local_8;
    FUN_0040875c(&local_8,4);
    iVar4 = *(int *)(*(int *)PTR_DAT_00688edc + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        FUN_0061e3a4(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00688edc + 4) + iVar3 * 0x28),&local_c
                    );
        FUN_005bad20(&local_8,local_c,*(int *)(*(int *)PTR_DAT_00688edc + 4) + 8 + iVar3 * 0x28,
                     in_stack_ffffffac,puVar6,in_stack_ffffffb4,uVar5);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_005baa58(DAT_0068752c + 0x398,local_8);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  *in_FS_OFFSET = in_stack_ffffffac;
  thunk_FUN_004072fc(&local_c,2,in_stack_ffffffb4,&LAB_005bb209);
  return;
}
