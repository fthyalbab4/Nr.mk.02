// rea decompile_all
// name: FUN_005774a0
// address: 0x5774a0
// body: available
// range: 0x5774a0-0x5774f8 inclusive
// range: 0x577529-0x5778dd inclusive
// range: 0x57790e-0x577d37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005774a0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EDI;
  float10 in_ST0;

  for (iVar2 = param_3 * 2 + 1; -1 < iVar2; iVar2 = iVar2 + -1) {
    unaff_EDI = *(undefined4 *)(param_2 + iVar2 * 4);
  }
  iVar2 = DAT_0084efc4 + param_1 * 0x60;
  *param_4 = *(undefined4 *)(iVar2 + 0x5c);
  if (*(int *)(iVar2 + 0x5c) == 0) {
    switch(*(undefined4 *)(iVar2 + 0x14)) {
    case 5:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 6:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 7:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 8:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 9:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 10:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 0xb:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 0xc:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 0xd:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 0xe:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 0xf:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
      break;
    case 0x10:
      (**(code **)(iVar2 + 0xc))();
      *(double *)(param_4 + 2) = (double)in_ST0;
    }
  }
  else {
    switch(*(undefined4 *)(iVar2 + 0x14)) {
    case 5:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 6:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 7:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 8:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 9:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 10:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 0xb:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 0xc:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 0xd:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 0xe:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 0xf:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
      break;
    case 0x10:
      uVar1 = (**(code **)(iVar2 + 0xc))();
      FUN_00407590(param_4 + 4,uVar1,0xfde9,unaff_EDI);
    }
  }
  return;
}
