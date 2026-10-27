// rea decompile_all
// name: FUN_00463224
// address: 0x463224
// body: available
// range: 0x463224-0x4632a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00463224(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;

  uVar4 = 8;
  cVar3 = FUN_004631a4(param_1);
  if (cVar3 == '\x01') {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    uVar1 = *(ushort *)(iVar2 + 0x3e);
    if (uVar1 < 0x11) {
      if (uVar1 == 0x10) {
        if (*(int *)(iVar2 + 0x40) == 0) {
          uVar4 = 4;
        }
        else if ((*(int *)(iVar2 + 0x40) == 3) && (*(int *)(iVar2 + 0x5c) == 0x7e0)) {
          uVar4 = 5;
        }
      }
      else if (uVar1 == 1) {
        uVar4 = 1;
      }
      else if (uVar1 == 4) {
        uVar4 = 2;
      }
      else if (uVar1 == 8) {
        uVar4 = 3;
      }
    }
    else if (uVar1 == 0x18) {
      uVar4 = 6;
    }
    else if ((uVar1 == 0x20) && (*(int *)(iVar2 + 0x40) == 0)) {
      uVar4 = 7;
    }
  }
  return uVar4;
}
