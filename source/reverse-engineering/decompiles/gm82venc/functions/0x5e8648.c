// rea decompile_all
// name: FUN_005e8648
// address: 0x5e8648
// body: available
// range: 0x5e8648-0x5e87d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e8648(int param_1)

{
  int iVar1;
  undefined4 *puVar2;

  FUN_00409dfc(param_1 + 0xc,&DAT_005e64e0,1,1);
  FUN_00409dfc(param_1 + 0x10,&DAT_005e64e0,1,1);
  iVar1 = 0;
  puVar2 = &DAT_00687e04;
  do {
    FUN_005e85b4(param_1 + 0xc,*puVar2,puVar2[1],iVar1);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 0x40);
  iVar1 = 0x40;
  puVar2 = &DAT_00688004;
  do {
    FUN_005e85b4(param_1 + 0xc,*puVar2,puVar2[1],(iVar1 + -0x3f) * 0x40);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 0x68);
  FUN_005e85b4(param_1 + 0xc,1,0xc,0xffffffff);
  FUN_005e85b4(param_1 + 0xc,1,9,0xfffffffe);
  FUN_005e85b4(param_1 + 0xc,1,10,0xfffffffe);
  FUN_005e85b4(param_1 + 0xc,1,0xb,0xfffffffe);
  FUN_005e85b4(param_1 + 0xc,0,0xc,0xfffffffe);
  iVar1 = 0;
  puVar2 = &DAT_00688144;
  do {
    FUN_005e85b4(param_1 + 0x10,*puVar2,puVar2[1],iVar1);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 0x40);
  iVar1 = 0x40;
  puVar2 = &DAT_00688344;
  do {
    FUN_005e85b4(param_1 + 0x10,*puVar2,puVar2[1],(iVar1 + -0x3f) * 0x40);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 != 0x68);
  FUN_005e85b4(param_1 + 0x10,1,0xc,0xffffffff);
  FUN_005e85b4(param_1 + 0x10,1,9,0xfffffffe);
  FUN_005e85b4(param_1 + 0x10,1,10,0xfffffffe);
  FUN_005e85b4(param_1 + 0x10,1,0xb,0xfffffffe);
  FUN_005e85b4(param_1 + 0x10,0,0xc,0xfffffffe);
  return;
}
