// rea decompile_all
// name: FUN_0040740c
// address: 0x40740c
// body: available
// range: 0x40740c-0x407544 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407540 to 0x405944 FUN_00405944 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040740c(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int local_28;
  int iVar8;
  int *local_20;
  int local_1c;

  sVar1 = 0;
  local_1c = param_2;
  local_20 = param_1;
  iVar5 = 0;
  iVar8 = 0;
  iVar2 = *(int *)(&stack0x00000000 + param_2 * 4);
  iVar4 = param_2;
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar2 = 0;
    goto LAB_004074c0;
  }
  if (*(short *)(iVar2 + -10) == 1) {
    sVar1 = *(short *)(iVar2 + -0xc);
  }
  else {
    FUN_00407660(*(undefined4 *)(&stack0x00000000 + param_2 * 4),param_2,iVar2,0);
    iVar2 = FUN_00407088(&stack0x00000000 + param_2 * 4,0);
    iVar8 = iVar2;
  }
  if (*param_1 == iVar2) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar4 = param_2 + -1;
    iVar5 = iVar2;
    do {
      iVar8 = 0;
LAB_0040746e:
      iVar2 = *(int *)(&stack0x00000000 + iVar4 * 4);
      if (iVar2 != 0) {
        if (*(short *)(iVar2 + -10) != 1) {
          FUN_00407660(*(undefined4 *)(&stack0x00000000 + iVar4 * 4),iVar4,iVar2,iVar8);
          iVar2 = FUN_00407088(&stack0x00000000 + iVar4 * 4,sVar1);
          iVar8 = iVar2;
        }
        bVar7 = SCARRY4(iVar3,*(int *)(iVar2 + -4));
        iVar3 = iVar3 + *(int *)(iVar2 + -4);
        if (bVar7) {
          FUN_00405944();
          return;
        }
        if (sVar1 == 0) {
          sVar1 = *(short *)(iVar2 + -0xc);
        }
        if (iVar5 == iVar2) {
          iVar5 = 0;
        }
      }
LAB_004074c0:
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        if (iVar5 == 0) {
          iVar2 = FUN_00406f48(iVar3,sVar1,iVar2,iVar8);
          piVar6 = (int *)0x0;
          local_28 = iVar2;
        }
        else {
          iVar2 = *(int *)(iVar5 + -4);
          FUN_004078e4(local_20,iVar3,*(undefined2 *)(iVar5 + -0xc));
          param_2 = param_2 + -1;
          iVar2 = iVar2 + *local_20;
          piVar6 = local_20;
          local_28 = *local_20;
        }
        do {
          iVar4 = *(int *)(&stack0x00000000 + param_2 * 4);
          iVar5 = iVar2;
          if ((iVar4 != 0) && (iVar4 != 0)) {
            iVar5 = iVar2 + *(int *)(iVar4 + -4);
            FUN_0040450c(iVar4,iVar2);
          }
          param_2 = param_2 + -1;
          iVar2 = iVar5;
        } while (param_2 != 0);
        FUN_00406e80(&local_20 + -local_1c);
        if (piVar6 == (int *)0x0) {
          if (local_28 != 0) {
            *(int *)(local_28 + -8) = *(int *)(local_28 + -8) + -1;
          }
          FUN_00406eb0(local_20);
        }
                    /* WARNING: Could not recover jumptable at 0x0040753e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&stack0xfffffffc + local_1c * 4))(*(code **)(&stack0xfffffffc + local_1c * 4));
        return;
      }
    } while( true );
  }
  iVar3 = 0;
  goto LAB_0040746e;
}
