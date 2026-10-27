// rea decompile_all
// name: FUN_0055f950
// address: 0x55f950
// body: available
// range: 0x55f950-0x55f9e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055f950(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *(int *)(param_1 + 0x1c);
  if (param_3 == 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    *(undefined4 *)(*piVar1 + 0x14) = 0x28;
    (**(code **)*piVar1)();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = iVar3 + param_3;
    uVar4 = (param_2 & (1 << ((byte)param_3 & 0x1f)) - 1U) << (0x18U - (char)iVar3 & 0x1f) |
            *(uint *)(param_1 + 0x18);
    for (; 7 < iVar3; iVar3 = iVar3 + -8) {
      puVar2 = *(undefined1 **)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *puVar2 = (char)(uVar4 >> 0x10);
      piVar1 = (int *)(param_1 + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_0055f920(param_1);
      }
      if (((int)uVar4 >> 0x10 & 0xffU) == 0xff) {
        puVar2 = *(undefined1 **)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *puVar2 = 0;
        piVar1 = (int *)(param_1 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_0055f920(param_1);
        }
      }
      uVar4 = uVar4 << 8;
    }
    *(uint *)(param_1 + 0x18) = uVar4;
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  return;
}
