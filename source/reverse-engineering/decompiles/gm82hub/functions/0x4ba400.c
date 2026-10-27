// rea decompile_all
// name: FUN_004ba400
// address: 0x4ba400
// body: available
// range: 0x4ba400-0x4ba4f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba400(void)

{
  int iVar1;
  int *piVar2;
  uint extraout_EDX;
  undefined1 auStack_1c [16];

  piVar2 = (int *)FUN_004065b8();
  FUN_004e9fdc(*(undefined4 *)PTR_DAT_0068917c,piVar2);
  if (piVar2[0x24] == 0) {
    (**(code **)(*piVar2 + 0x78))(piVar2,0);
  }
  else {
    FUN_00446458(piVar2[0x24],piVar2);
    FUN_004bcb48(piVar2[0x24],0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x78))(piVar2,0);
    FUN_004baee8(piVar2,auStack_1c);
    FUN_00406268(piVar2,0xffffffff,auStack_1c);
    piVar2[0x24] = 0;
  }
  iVar1 = piVar2[0x1a];
  piVar2[0x1a] = 0;
  FUN_00405fdc(iVar1);
  iVar1 = piVar2[0x1c];
  piVar2[0x1c] = 0;
  FUN_00405fdc(iVar1);
  iVar1 = piVar2[0x19];
  piVar2[0x19] = 0;
  FUN_00405fdc(iVar1);
  FUN_00417b8c(piVar2[0x5d]);
  iVar1 = piVar2[0x1d];
  piVar2[0x1d] = 0;
  FUN_00405fdc(iVar1);
  piVar2[0x5b] = 0;
  iVar1 = piVar2[0x2b];
  piVar2[0x2b] = 0;
  FUN_00405fdc(iVar1);
  FUN_004460e0(piVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406560(piVar2);
  }
  return;
}
