// rea decompile_all
// name: FUN_004062ec
// address: 0x4062ec
// body: available
// range: 0x4062ec-0x40644b inclusive
// range: 0x40646c-0x406471 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004062ec(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  bool bVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int aiStackY_34 [2];
  int *piStackY_2c;
  undefined4 uStackY_28;
  int *piStackY_24;

  if ((in_stack_00000004[1] & 6U) == 0) {
    if (*in_stack_00000004 == 0xeedfade) {
      iVar2 = *(int *)in_stack_00000004[6];
    }
    else {
      FUN_00405930();
      if (DAT_0078300c == (code *)0x0) {
        return 1;
      }
      iVar2 = (*DAT_0078300c)();
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar6 = *(int *)(*(int *)(in_stack_00000008 + 4) + 5);
    piVar5 = (int *)(*(int *)(in_stack_00000008 + 4) + 9);
    do {
      piVar3 = (int *)*piVar5;
      iVar7 = iVar2;
      if (piVar3 == (int *)0x0) {
LAB_00406385:
        if (*in_stack_00000004 == 0xeedfade) {
          if ((DAT_0077302c < 2) || (DAT_00773028 != '\0')) goto LAB_004063ff;
          piStackY_24 = (int *)0x4063f7;
          iVar2 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        else {
          uVar4 = (*DAT_00783010)();
          FUN_004060d8(uVar4,in_stack_0000000c);
          if ((DAT_0077302c == 0) || (DAT_00773028 != '\0')) goto LAB_004063ff;
          iVar2 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0xfffffff4);
        }
        if (iVar2 == 0) {
          return 1;
        }
LAB_004063ff:
        in_stack_00000004[1] = in_stack_00000004[1] | 2;
        uStackY_28 = 0;
        piStackY_2c = in_stack_00000004;
        aiStackY_34[1] = 0x406420;
        aiStackY_34[0] = in_stack_00000008;
        piStackY_24 = piVar5;
        (*DAT_00783018)();
        iVar2 = aiStackY_34[0];
        aiStackY_34[0] = 0x40642a;
        piVar5 = (int *)FUN_0040bd38();
        aiStackY_34[0] = *piVar5;
        *piVar5 = (int)aiStackY_34;
        *(undefined1 **)(unaff_ESI + 4) = &LAB_0040644c;
        FUN_00406114(piStackY_2c);
                    /* WARNING: Could not recover jumptable at 0x00406449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(iVar2 + 4))();
        return uVar4;
      }
      while( true ) {
        iVar1 = *piVar3;
        if (iVar1 == iVar7) goto LAB_00406385;
        if (*(int *)(iVar1 + -0x34) == *(int *)(iVar7 + -0x34)) {
          if (**(char **)(iVar1 + -0x38) == **(char **)(iVar7 + -0x38)) {
            bVar8 = *(char **)(iVar7 + -0x38) == (char *)0xffffffff;
            FUN_00404e14(*(char **)(iVar1 + -0x38) + 1);
            if (bVar8) goto LAB_00406385;
          }
        }
        piVar3 = (int *)*piVar5;
        if (*(int **)(iVar7 + -0x30) == (int *)0x0) break;
        iVar7 = **(int **)(iVar7 + -0x30);
      }
      piVar5 = piVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 1;
}
