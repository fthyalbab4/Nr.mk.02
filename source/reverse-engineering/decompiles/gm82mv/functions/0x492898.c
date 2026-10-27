// rea decompile_all
// name: FUN_00492898
// address: 0x492898
// body: available
// range: 0x492898-0x49296b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492898(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int local_24 [2];
  int local_1c;

  iVar1 = FUN_00438f2c(*(undefined4 *)(param_1 + 0x288),param_2);
  if (iVar1 != -1) {
    iVar2 = FUN_004927d0(param_1,iVar1,*(undefined4 *)(param_2 + 0x40),
                         *(undefined4 *)(param_2 + 0x44));
    bVar3 = iVar1 != iVar2;
    cVar4 = '\0';
    if (bVar3) {
      iVar2 = FUN_00438f2c(*(undefined4 *)(param_1 + 0x288),param_2);
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
    }
    else {
      iVar2 = FUN_004bcb90(param_1,0x41d,iVar1,local_24);
      if (iVar2 != 0) {
        bVar3 = *(int *)(param_2 + 0x48) != local_1c - local_24[0];
        cVar4 = bVar3;
      }
    }
    if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) ||
       (*(int *)(param_2 + 0x4c) == *(int *)(param_1 + 0x284))) {
      if (bVar3) {
        if (cVar4 != '\0') {
          FUN_0049180c(param_1,iVar1);
        }
        FUN_00492640(param_1);
        FUN_00491014(param_1,0);
      }
      else {
        FUN_00490eb0(param_1,iVar1);
      }
    }
    else {
      FUN_00491160(param_1,*(undefined4 *)(param_2 + 0x4c));
    }
  }
  return;
}
