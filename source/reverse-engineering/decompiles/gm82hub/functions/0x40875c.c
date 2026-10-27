// rea decompile_all
// name: FUN_0040875c
// address: 0x40875c
// body: available
// range: 0x40875c-0x408877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408873 to 0x405ea4 FUN_00405ea4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040875c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int iVar6;
  int *local_1c;
  int local_18;

  local_18 = param_2;
  local_1c = param_1;
  iVar4 = 0;
  iVar6 = 0;
  iVar1 = *(int *)(&stack0x00000000 + param_2 * 4);
  iVar3 = param_2;
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = 0;
    goto LAB_004087f7;
  }
  if (*(short *)(iVar1 + -10) != 2) {
    thunk_FUN_00407ad0(*(undefined4 *)(&stack0x00000000 + param_2 * 4),param_2,iVar1,0);
    iVar1 = FUN_00407498(&stack0x00000000 + param_2 * 4);
    iVar6 = iVar1;
  }
  if (*param_1 == iVar1) {
    uVar2 = *(uint *)(iVar1 + -4);
    iVar3 = param_2 + -1;
    iVar4 = iVar1;
    do {
      iVar6 = 0;
LAB_004087b0:
      iVar1 = *(int *)(&stack0x00000000 + iVar3 * 4);
      if (iVar1 != 0) {
        if (*(short *)(iVar1 + -10) != 2) {
          thunk_FUN_00407ad0(*(undefined4 *)(&stack0x00000000 + iVar3 * 4),iVar3,iVar1,iVar6);
          iVar1 = FUN_00407498(&stack0x00000000 + iVar3 * 4);
          iVar6 = iVar1;
        }
        uVar2 = uVar2 + *(int *)(iVar1 + -4);
        if ((uVar2 & 0xc0000000) != 0) {
          FUN_00405ea4();
          return;
        }
        if (iVar4 == iVar1) {
          iVar4 = 0;
        }
      }
LAB_004087f7:
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        if (iVar4 == 0) {
          iVar1 = FUN_00408d00();
          piVar5 = (int *)0x0;
          local_24 = iVar1;
        }
        else {
          iVar3 = *(int *)(iVar4 + -4);
          FUN_00408520(local_1c,uVar2,iVar1,iVar6);
          param_2 = param_2 + -1;
          iVar1 = iVar3 * 2 + *local_1c;
          piVar5 = local_1c;
          local_24 = *local_1c;
        }
        do {
          iVar3 = *(int *)(&stack0x00000000 + param_2 * 4);
          iVar4 = iVar1;
          if ((iVar3 != 0) && (iVar3 != 0)) {
            iVar4 = iVar1 + *(int *)(iVar3 + -4) * 2;
            FUN_00404514(iVar3,iVar1);
          }
          param_2 = param_2 + -1;
          iVar1 = iVar4;
        } while (param_2 != 0);
        FUN_004072fc(&local_1c + -local_18);
        if (piVar5 == (int *)0x0) {
          if (local_24 != 0) {
            *(int *)(local_24 + -8) = *(int *)(local_24 + -8) + -1;
          }
          FUN_00408194(local_1c);
        }
                    /* WARNING: Could not recover jumptable at 0x00408871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&stack0xfffffffc + local_18 * 4))(*(code **)(&stack0xfffffffc + local_18 * 4));
        return;
      }
    } while( true );
  }
  uVar2 = 0;
  goto LAB_004087b0;
}
