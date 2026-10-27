// rea decompile_all
// name: FUN_00643c30
// address: 0x643c30
// body: available
// range: 0x643c30-0x643cb2 inclusive
// range: 0x643cff-0x643eaa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643c30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4ac),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4bc),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4d4),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4c8),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x5ec),0);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x4dc),0);
  if (*(int *)(param_1 + 0x768) != 0) {
    FUN_00405a7c();
  }
  *(undefined4 *)(param_1 + 0x768) = 0;
  *(undefined4 *)(param_1 + 0x738) = param_2;
  switch(param_2) {
  case 1:
    uVar1 = FUN_0064ab28(&PTR_LAB_00648ac0,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 2:
    uVar1 = FUN_00405a4c(&PTR_LAB_00648438,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 3:
    uVar1 = FUN_00405a4c(&PTR_LAB_006485ec,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 4:
    uVar1 = FUN_00405a4c(&PTR_LAB_00648e98,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 5:
    uVar1 = FUN_00405a4c(&PTR_LAB_0064944c,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 6:
    uVar1 = FUN_00405a4c(&PTR_LAB_00649534,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 7:
    uVar1 = FUN_00405a4c(&PTR_LAB_0064961c,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 8:
    uVar1 = FUN_0064ab28(&PTR_LAB_00648c08,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 9:
    uVar1 = FUN_00405a4c(&PTR_LAB_00649704,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 0xb:
    uVar1 = FUN_0064ab28(&PTR_LAB_00648d50,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 0xc:
    uVar1 = FUN_00405a4c(&PTR_FUN_00649044,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 0xf:
    uVar1 = FUN_0063c74c(&PTR_FUN_0063b4cc,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 0x10:
    uVar1 = FUN_0063c74c(&PTR_FUN_0063b4cc,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 0x11:
    uVar1 = FUN_0063c74c(&PTR_FUN_0063b4cc,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
    break;
  case 0x12:
    uVar1 = FUN_00405a4c(&PTR_LAB_00648730,1);
    *(undefined4 *)(param_1 + 0x768) = uVar1;
  }
  if (*(undefined4 **)(param_1 + 0x768) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x768))();
  }
  if (*(int *)(param_1 + 0x738) == 0xf) {
    FUN_0063c828(*(undefined4 *)(param_1 + 0x768),1);
  }
  if (*(int *)(param_1 + 0x738) == 0x10) {
    FUN_0063c828(*(undefined4 *)(param_1 + 0x768),2);
  }
  if (*(int *)(param_1 + 0x738) == 0x11) {
    FUN_0063c828(*(undefined4 *)(param_1 + 0x768),3);
  }
  FUN_00645298(param_1);
  FUN_006448b4(param_1);
  return;
}
