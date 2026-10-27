// rea decompile_all
// name: FUN_004f1be8
// address: 0x4f1be8
// body: available
// range: 0x4f1be8-0x4f1cfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1be8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  byte extraout_DL;

  piVar1 = (int *)FUN_00406058();
  FUN_004491b8(piVar1);
  if ((char)piVar1[0x7b] != '\0') {
    *(undefined1 *)(piVar1 + 0x7b) = 0;
    FUN_004ebd54(piVar1,0);
  }
  FUN_0040b140(piVar1 + 0x72);
  iVar2 = piVar1[0x71];
  piVar1[0x71] = 0;
  FUN_00405a7c(iVar2);
  iVar2 = piVar1[0x2b];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    FUN_00405a7c(*(undefined4 *)(iVar2 + 8));
  }
  if (piVar1[0xd] != 0) {
    FUN_004f2e74(piVar1,1);
  }
  if (piVar1[0x96] != 0) {
    (**(code **)(*piVar1 + 0xc4))();
  }
  iVar2 = FUN_004f3124(piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_004f30e8(piVar1,iVar2 + -1);
    FUN_004f2ee0(piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_004f3124(piVar1);
  }
  iVar2 = piVar1[0x70];
  piVar1[0x70] = 0;
  FUN_00405a7c(iVar2);
  if (piVar1[0x97] != 0) {
    FUN_0044a544();
  }
  iVar2 = piVar1[0x6f];
  piVar1[0x6f] = 0;
  FUN_00405a7c(iVar2);
  FUN_004ed448(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00406000(piVar1);
  }
  return;
}
