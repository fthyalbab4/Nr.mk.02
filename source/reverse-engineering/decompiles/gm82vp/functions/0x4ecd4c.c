// rea decompile_all
// name: FUN_004ecd4c
// address: 0x4ecd4c
// body: available
// range: 0x4ecd4c-0x4ed0ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ecd8c (push 0x4ed0eb followed by fs-segment stack chaining); handler 0x4ed0eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004ecd4c(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined1 *apuStackY_1860 [1514];
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_74 [2];
  int local_6c;
  char local_61;
  tagPOINT local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28 [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  bVar6 = 0;
  local_90 = 0;
  local_94 = 0;
  local_50 = *param_2;
  local_4c = param_2[1];
  puStack_a4 = (undefined1 *)0x4ecd7e;
  local_8 = param_1;
  FUN_00408ff8(&local_48,&DAT_004ac8c8);
  puStack_a8 = &LAB_004ed0eb;
  uStack_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff54;
  *(undefined1 *)(local_8 + 0x58) = 0;
  local_18 = 0;
  puStack_a4 = &stack0xfffffffc;
  if ((*(char *)(local_8 + 0x88) != '\0') &&
     (puStack_a4 = &stack0xfffffffc, *(int *)(local_8 + 0x60) != 0)) {
    puStack_a4 = &stack0xfffffffc;
    cVar3 = FUN_004df680(*(undefined1 *)(local_8 + 0xd2));
    if (cVar3 != '\0') {
      FUN_004b996c(&local_50,1);
      iVar5 = thunk_FUN_004e95a9();
      if (iVar5 == *(int *)(local_8 + 0x60)) {
        iVar5 = FUN_004bcba4(*(undefined4 *)(local_8 + 0x60));
        if (iVar5 == 0) {
          local_48 = *(undefined4 *)(local_8 + 0x60);
          local_40 = local_50;
          local_3c = local_4c;
          iVar5 = FUN_004ecab4();
          local_3c = local_3c + iVar5;
          local_38 = FUN_004e86ac(DAT_0068f2ec);
          local_34 = *(undefined4 *)(local_8 + 0x5c);
          FUN_004baee8(*(undefined4 *)(local_8 + 0x60),&stack0xffffff7c);
          local_30 = local_84;
          (&uStack_2c)[(uint)bVar6 * -2] =
               *(undefined4 *)((int)&stack0xffffff80 + (uint)bVar6 * 0xfffffffe * 4);
          local_28[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
               *(undefined4 *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          (local_28 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
               *(undefined4 *)
                ((int)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                ((uint)bVar6 * -2 + 1) * 4);
          (**(code **)(**(int **)(local_8 + 0x60) + 0x50))(*(int **)(local_8 + 0x60),&local_58);
          local_60.x = 0;
          local_60.y = 0;
          piVar1 = *(int **)(*(int *)(local_8 + 0x60) + 0x34);
          if (piVar1 == (int *)0x0) {
            iVar5 = *(int *)(local_8 + 0x60);
            cVar3 = FUN_004061f8(iVar5,&PTR_LAB_004b3174);
            if ((cVar3 != '\0') && (*(int *)(iVar5 + 0x1d4) != 0)) {
              ClientToScreen(*(HWND *)(iVar5 + 0x1d4),&local_60);
            }
          }
          else {
            (**(code **)(*piVar1 + 0x50))(piVar1,&local_60);
          }
          FUN_0040c4a8(&local_30,local_60.x - local_58,local_60.y - local_54);
          FUN_004bb188(*(undefined4 *)(local_8 + 0x60),&local_50,&stack0xffffff74);
          local_28[2] = local_8c;
          local_28[3] = local_88;
          FUN_004e956c(*(undefined4 *)(local_8 + 0x60),&stack0xffffff6c);
          FUN_004b7ee8(local_94,&stack0xffffff70);
          FUN_004081e8(&local_10,local_90);
          local_14 = *(undefined4 *)(local_8 + 0x74);
          local_44 = PTR_PTR_00681aa4;
          local_c = 0;
          iVar5 = FUN_004bcb48(*(undefined4 *)(local_8 + 0x60),0xb030,0,&local_48);
          local_61 = iVar5 == 0;
          if (((bool)local_61) && (*(short *)(local_8 + 0x162) != 0)) {
            (**(code **)(local_8 + 0x160))
                      (*(undefined4 *)(local_8 + 0x164),&local_10,&local_61,&local_48);
          }
          if ((local_61 == '\0') || (*(int *)(local_8 + 0x60) == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined1 *)(local_8 + 0x58) = uVar4;
          if ((*(char *)(local_8 + 0x58) != '\0') && (local_10 != 0)) {
            FUN_004ecc0c(local_44);
            (**(code **)(**(int **)(local_8 + 0x84) + 0x80))
                      (*(int **)(local_8 + 0x84),*(undefined1 *)(*(int *)(local_8 + 0x60) + 0x61));
            (**(code **)(**(int **)(local_8 + 0x84) + 0x104))
                      (*(int **)(local_8 + 0x84),local_38,local_10,local_74,local_c);
            FUN_0040c4a8(local_74,local_40,local_3c);
            cVar3 = FUN_00406268(*(undefined4 *)(local_8 + 0x84));
            if (cVar3 != '\0') {
              iVar5 = FUN_004ecc6c(local_10);
              local_74[0] = local_74[0] - (iVar5 + 5);
              local_6c = local_6c - (iVar5 + 5);
            }
            FUN_004bb054(*(undefined4 *)(local_8 + 0x60),&local_30,&stack0xffffff74);
            *(undefined4 *)(local_8 + 100) = local_8c;
            *(undefined4 *)(local_8 + 0x68) = local_88;
            FUN_004bb054(*(undefined4 *)(local_8 + 0x60),local_28,&stack0xffffff74);
            *(undefined4 *)(local_8 + 0x6c) = local_8c;
            *(undefined4 *)(local_8 + 0x70) = local_88;
            FUN_004bb810(*(undefined4 *)(local_8 + 0x84),local_34);
            (**(code **)(**(int **)(local_8 + 0x84) + 0x100))
                      (*(int **)(local_8 + 0x84),local_74,local_10,local_c);
            FUN_004e96b8();
            if (local_18 < 1) {
              FUN_004ec83c(local_8,local_14,1);
            }
            else {
              FUN_004ec83c(local_8,local_18,0);
            }
            goto LAB_004ed0bf;
          }
        }
      }
    }
  }
  if (local_18 < 1) {
    FUN_004eca78(local_8);
  }
  else {
    FUN_004ec83c(local_8,local_18,0);
  }
LAB_004ed0bf:
  puVar2 = puStack_a4;
  *in_FS_OFFSET = uStack_ac;
  puStack_a4 = &LAB_004ed0f2;
  puStack_a8 = (undefined1 *)0x4ed0dc;
  thunk_FUN_004072fc(&stack0xffffff6c,2,puVar2);
  puStack_a8 = (undefined1 *)0x4ed0ea;
  FUN_004090d0(&local_48,&DAT_004ac8c8);
  return;
}
