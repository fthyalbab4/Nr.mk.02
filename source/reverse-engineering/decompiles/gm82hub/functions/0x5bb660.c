// rea decompile_all
// name: FUN_005bb660
// address: 0x5bb660
// body: available
// range: 0x5bb660-0x5bb9a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bb695 (push 0x5bb9a1 followed by fs-segment stack chaining); handler 0x5bb9a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bb660(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined *in_stack_ffffff98;
  wchar_t *in_stack_ffffffa0;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  wchar_t *pwVar8;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  puStack_30 = (undefined1 *)0x5bb68a;
  FUN_0040923c(&local_14,&DAT_005ba9c8);
  puStack_34 = &LAB_005bb9a1;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if ((local_14 != 0) && (puStack_30 = &stack0xfffffffc, *(char *)(local_14 + 0x59) != '\0')) {
    iVar1 = 0;
    puStack_30 = &stack0xfffffffc;
    if (-1 < *(int *)(*(int *)PTR_DAT_0068939c + 0x68) + -1) {
      iVar2 = 0;
      puStack_30 = &stack0xfffffffc;
      local_18 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
      do {
        iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar2);
        if (*(char *)(iVar1 + 0x108) == '\0') {
          uVar4 = *(int *)(iVar1 + 4) == local_10;
          if ((bool)uVar4) break;
          FUN_00571ed0(*(undefined4 *)(iVar1 + 0xcc),&local_1c);
          FUN_0040891c(local_1c,local_c);
          if ((bool)uVar4) break;
        }
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
        iVar1 = 0;
      } while (local_18 != 0);
    }
    if (iVar1 == 0) {
      FUN_004bb690(*(undefined4 *)(local_14 + 0x398),L"NO SUCH INSTANCE EXISTS");
    }
    else {
      FUN_004081e8(&local_8,0);
      FUN_005baec0(&local_8,iVar1,&DAT_005bb9f8);
      FUN_005baec0(&local_8,iVar1,&DAT_005bba08);
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bba18);
      FUN_005baec0(&local_8,iVar1,L"speed");
      FUN_005baec0(&local_8,iVar1,L"hspeed");
      FUN_005baec0(&local_8,iVar1,L"vspeed");
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bba88);
      FUN_005baec0(&local_8,iVar1,L"gravity");
      FUN_005baec0(&local_8,iVar1,L"gravity_direction");
      pwVar8 = L"________________________________";
      puVar7 = &DAT_005bbb44;
      puVar6 = &DAT_005bbb54;
      uVar5 = local_8;
      FUN_0040875c(&local_8,4);
      FUN_005baec0(&local_8,iVar1,&PTR_LAB_005bbb64,puVar6,puVar7,pwVar8,uVar5);
      FUN_005baec0(&local_8,iVar1,&PTR_LAB_0062006d_2_005bbb78);
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbba0);
      FUN_005baec0(&local_8,iVar1,L"image_index");
      FUN_005baec0(&local_8,iVar1,L"image_single");
      FUN_005baec0(&local_8,iVar1,L"image_speed");
      FUN_005baec0(&local_8,iVar1,L"image_xscale");
      FUN_005baec0(&local_8,iVar1,L"image_yscale");
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbc88);
      FUN_005baec0(&local_8,iVar1,L"solid");
      FUN_005baec0(&local_8,iVar1,L"visible");
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbce0);
      FUN_005baec0(&local_8,iVar1,L"depth");
      pwVar8 = L"________________________________";
      puVar7 = &DAT_005bbb44;
      puVar6 = &DAT_005bbb54;
      uVar5 = local_8;
      FUN_0040875c(&local_8,4);
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbd1c,puVar6,puVar7,pwVar8,uVar5);
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbd40);
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbd68);
      FUN_005baec0(&local_8,iVar1,&PTR_DAT_005bbd98);
      in_stack_ffffffa0 = L"________________________________";
      puVar6 = &DAT_005bbb44;
      in_stack_ffffff98 = &DAT_005bbb54;
      uVar5 = local_8;
      FUN_0040875c(&local_8,4);
      iVar2 = *(int *)(*(int *)(iVar1 + 0x104) + 8);
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        local_18 = iVar2;
        do {
          FUN_0061e3a4(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x104) + 4) + iVar3 * 0x28),
                       &local_20);
          FUN_005bad20(&local_8,local_20,*(int *)(*(int *)(iVar1 + 0x104) + 4) + 8 + iVar3 * 0x28,
                       in_stack_ffffff98,puVar6,in_stack_ffffffa0,uVar5);
          iVar3 = iVar3 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      FUN_005baa58(local_14 + 0x398,local_8);
    }
  }
  *in_FS_OFFSET = in_stack_ffffff98;
  thunk_FUN_004072fc(&local_20,2,in_stack_ffffffa0,&LAB_005bb9a8);
  FUN_004090d0(&local_14,&DAT_005ba9c8);
  thunk_FUN_004072d8(&local_8);
  return;
}
