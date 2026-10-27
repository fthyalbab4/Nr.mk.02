// rea decompile_all
// name: FUN_00564f30
// address: 0x564f30
// body: available
// range: 0x564f30-0x564f52 inclusive
// range: 0x564f59-0x564f75 inclusive
// range: 0x564fed-0x565051 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Instruction at (ram,0x00565039) overlaps instruction at (ram,0x00565037)
    */

void FUN_00564f30(undefined4 param_1,int param_2)

{
  int *unaff_EBP;
  uint uVar1;

  uVar1 = DAT_00686438;
  switch(DAT_0068643c) {
  case 0:
    goto code_r0x0056503f;
  case 1:
    break;
  case 2:
    uVar1 = DAT_00686438 >> 1;
    break;
  case 4:
    uVar1 = (int)DAT_00686438 / 3;
    param_2 = (int)DAT_00686438 % 3;
    break;
  case 5:
  case 6:
    uVar1 = DAT_00686438 - 1;
  case 3:
    uVar1 = uVar1 - 1;
    break;
  default:
    goto switchD_00564f51_default;
  }
  if (uVar1 != 0) {
    if (DAT_00686428 == 0) {
      FUN_006212b0(DAT_00686440,param_2);
      (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
      unaff_EBP = *(int **)PTR_DAT_00689570;
code_r0x0056503f:
      (**(code **)(*unaff_EBP + 0x120))();
      FUN_006212b0(0xffffffff);
    }
    else {
      FUN_005684b8(DAT_00686428,DAT_0068643c,DAT_00686438,&DAT_00721dd4);
    }
  }
switchD_00564f51_default:
  return;
}
