// rea decompile_all
// name: FUN_004de63c
// address: 0x4de63c
// body: available
// range: 0x4de63c-0x4de6d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de63c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;

  uVar1 = *(ushort *)(param_1 + 0x60);
  if (uVar1 == 0) {
    iVar3 = FUN_004dbe08(param_1);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        FUN_004dbe18(param_1,iVar4);
        FUN_004de63c();
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (*(int *)(param_4 + -4) == 0) {
    *(int *)(param_4 + -8) = *(int *)(param_4 + -8) + 1;
  }
  else {
    bVar2 = 3;
    if ((uVar1 & 0x4000) != 0) {
      bVar2 = 0xb;
    }
    if ((uVar1 & 0x8000) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    if ((uVar1 & 0x2000) != 0) {
      bVar2 = bVar2 | 4;
    }
    **(ushort **)(param_4 + -4) = (ushort)bVar2;
    *(ushort *)(*(int *)(param_4 + -4) + 2) = *(ushort *)(param_1 + 0x60) & 0xff;
    *(undefined2 *)(*(int *)(param_4 + -4) + 4) = *(undefined2 *)(param_1 + 0x50);
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) + 6;
  }
  return;
}
