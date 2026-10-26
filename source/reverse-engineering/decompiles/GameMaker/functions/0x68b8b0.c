// rea decompile_all
// name: FUN_0068b8b0
// address: 0x68b8b0
// body: available
// range: 0x68b8b0-0x68b9ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b8b0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (*(int *)(param_1 + 0x670) != 0) {
    FUN_00405a7c();
    *(undefined4 *)(param_1 + 0x670) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x640)) {
    cVar2 = FUN_0064de18(*(int *)(param_1 + 0x640));
    if (cVar2 != '\0') {
      iVar3 = FUN_0064e048(*(undefined4 *)(param_1 + 0x640));
      if (*(char *)(iVar3 + 8) == '\0') {
        uVar4 = FUN_0062db94(iVar3);
        *(undefined4 *)(param_1 + 0x648) = uVar4;
        uVar4 = FUN_0062db9c(iVar3);
        *(undefined4 *)(param_1 + 0x64c) = uVar4;
        *(undefined4 *)(param_1 + 0x650) = 0;
        *(undefined4 *)(param_1 + 0x654) = 0;
        *(undefined4 *)(param_1 + 0x658) = 0;
        *(undefined4 *)(param_1 + 0x65c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(iVar3 + 0x20);
      }
      *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_1 + 0x648);
      *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x64c);
      uVar4 = FUN_0062db9c(iVar3);
      uVar5 = FUN_0062db94(iVar3);
      uVar4 = FUN_005b5764(uVar5,uVar4);
      FUN_007034e0(uVar4,0,0,1,*(undefined4 *)(iVar3 + 4));
      uVar5 = FUN_0070399c(uVar4);
      *(undefined4 *)(param_1 + 0x670) = uVar5;
      FUN_00405a7c(uVar4);
      piVar1 = *(int **)(param_1 + 0x670);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x40))(piVar1,0);
        piVar1 = *(int **)(*(int *)(param_1 + 0x454) + 0x1b0);
        (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(param_1 + 0x670));
      }
    }
  }
  return;
}
