// rea decompile_all
// name: FUN_00587b90
// address: 0x587b90
// body: available
// range: 0x587b90-0x587c26 inclusive
// range: 0x587c48-0x587e60 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x587bbb (push 0x587e61 followed by fs-segment stack chaining); handler 0x587e61 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587b90(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int local_38;
  int local_1c [6];

  puStack_48 = (undefined1 *)0x587bb0;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_4c = &LAB_00587e61;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  iVar2 = FUN_00586fa0(param_1,**(undefined4 **)(param_2 + 0x2c),local_1c);
  if (iVar2 == 0) {
    if (local_1c[0] == 0) {
      iVar2 = FUN_004048b8();
      switch(iVar2) {
      case -7:
        FUN_00610d7c(param_1[3],*(undefined4 *)(param_2 + 0x30),&PTR_DAT_00587f0c);
        break;
      case -6:
      case -1:
        FUN_00587b54(param_1,*param_1,**(int **)(param_2 + 0x2c) + 0x38,param_3);
        break;
      case -5:
        FUN_00610d7c(param_1[3],*(undefined4 *)(param_2 + 0x30),&PTR_DAT_00587eb4);
        break;
      case -4:
        break;
      case -3:
        local_38 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
        if (-1 < local_38 + -1) {
          iVar2 = 0;
          do {
            iVar6 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar2);
            if (*(char *)(iVar6 + 0x108) == '\0') {
              uVar5 = param_3;
              uVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar2);
              iVar6 = FUN_00587b54(param_1,uVar4,**(int **)(param_2 + 0x2c) + 0x38,uVar5);
              if ((iVar6 == -3) || ((iVar6 != 0 && (iVar6 != -4)))) goto LAB_00587e45;
            }
            iVar2 = iVar2 + 1;
            local_38 = local_38 + -1;
          } while (local_38 != 0);
        }
        break;
      case -2:
        FUN_00587b54(param_1,param_1[1],**(int **)(param_2 + 0x2c) + 0x38,param_3);
        break;
      default:
        if (iVar2 < 100000) {
          local_38 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,iVar2);
          if (-1 < local_38 + -1) {
            iVar6 = 0;
            do {
              iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar2,iVar6);
              if (*(char *)(iVar3 + 0x108) == '\0') {
                uVar5 = param_3;
                uVar4 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar2,iVar6,param_3);
                iVar3 = FUN_00587b54(param_1,uVar4,**(int **)(param_2 + 0x2c) + 0x38,uVar5);
                if ((iVar3 == -3) || ((iVar3 != 0 && (iVar3 != -4)))) goto LAB_00587e45;
              }
              iVar6 = iVar6 + 1;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
        }
        else {
          local_38 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
          if (-1 < local_38 + -1) {
            iVar6 = 0;
            do {
              iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar6);
              if (iVar2 == *(int *)(iVar3 + 4)) {
                iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar6);
                if (*(char *)(iVar2 + 0x108) == '\0') {
                  uVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar6);
                  FUN_00587b54(param_1,uVar5,**(int **)(param_2 + 0x2c) + 0x38,param_3);
                }
                break;
              }
              iVar6 = iVar6 + 1;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
        }
      }
    }
    else {
      FUN_00610d7c(param_1[3],*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x30),&PTR_LAB_00587e80);
    }
  }
LAB_00587e45:
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00587e68;
  puStack_4c = (undefined1 *)0x587e60;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
