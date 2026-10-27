// rea decompile_all
// name: FUN_0061fc94
// address: 0x61fc94
// body: available
// range: 0x61fc94-0x61ff25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061fc94(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  float10 in_ST0;
  float10 in_ST1;
  double in_stack_0000000c;
  double in_stack_00000014;
  double in_stack_0000001c;
  double in_stack_00000024;
  undefined2 uVar1;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [76];

  if (DAT_006886a8 != (int *)0x0) {
    if ((*PTR_PTR_00689134 == '\0') || (DAT_006886d0 == '\0')) {
      FUN_00404874();
      uVar1 = SUB42((float)in_ST0,0);
      FUN_00404864();
      FUN_00531620(local_50,extraout_EDX_02,extraout_ECX_02,0,SUB42((float)in_ST1,0),uVar1);
      FUN_00531620(local_5c,extraout_EDX_03,extraout_ECX_03,0,
                   (float)in_stack_0000000c / 2.0 + (float)in_stack_0000001c,
                   SUB42((float)in_stack_00000014 / 2.0 + (float)in_stack_00000024,0));
      FUN_00531620(local_68,extraout_EDX_04,extraout_ECX_04,0xc67a0000,
                   (float)in_stack_0000000c / 2.0 + (float)in_stack_0000001c,
                   (float)in_stack_00000014 / 2.0 + (float)in_stack_00000024);
      (**(code **)PTR_DAT_00688bac)();
      (**(code **)(*DAT_006886a8 + 0x94))();
      (**(code **)PTR_DAT_00689184)();
      (**(code **)(*DAT_006886a8 + 0x94))();
    }
    else {
      FUN_00404874();
      uVar1 = SUB42((float)in_ST0,0);
      FUN_00404864();
      FUN_00531620(local_50,extraout_EDX,extraout_ECX,0,SUB42((float)in_ST1,0),uVar1);
      FUN_00531620(local_5c,extraout_EDX_00,extraout_ECX_00,0,
                   (float)in_stack_0000000c / 2.0 + (float)in_stack_0000001c,
                   SUB42((float)in_stack_00000014 / 2.0 + (float)in_stack_00000024,0));
      FUN_00531620(local_68,extraout_EDX_01,extraout_ECX_01,-(float)in_stack_00000014,
                   (float)in_stack_0000000c / 2.0 + (float)in_stack_0000001c,
                   (float)in_stack_00000014 / 2.0 + (float)in_stack_00000024);
      (**(code **)PTR_DAT_00688bac)();
      (**(code **)(*DAT_006886a8 + 0x94))();
      (**(code **)PTR_DAT_00689014)();
      (**(code **)(*DAT_006886a8 + 0x94))();
    }
  }
  return;
}
