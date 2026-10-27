// rea decompile_all
// name: FUN_0041561c
// address: 0x41561c
// body: available
// range: 0x41561c-0x4156db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041561c(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *local_8;
  ushort *local_4;

  if (param_1 == param_2) {
    return 0;
  }
  if (((uint)param_1 & (uint)param_2) == 0) {
    if (param_1 == (ushort *)0x0) {
      return -*(int *)(param_2 + -2);
    }
    if (param_2 == (ushort *)0x0) {
      return *(uint *)(param_1 + -2);
    }
  }
  local_4 = (ushort *)0x0;
  local_8 = (ushort *)0x0;
  if (param_1[-5] != 2) {
    FUN_004083c0(&stack0xfffffff4,param_1);
    param_1 = local_8;
  }
  if (param_2[-5] != 2) {
    FUN_004083c0(&local_4);
    param_2 = local_4;
  }
  if (*param_2 == *param_1) {
    uVar2 = *(uint *)(param_1 + -2) - *(uint *)(param_2 + -2);
    iVar3 = ((*(uint *)(param_1 + -2) < *(uint *)(param_2 + -2)) - 1 & uVar2) -
            *(int *)(param_1 + -2);
    iVar4 = iVar3 * 2;
    do {
      uVar5 = *(uint *)((int)param_1 + iVar4 + iVar3 * -2) ^
              *(uint *)((int)param_2 + iVar4 + iVar3 * -2);
      if (uVar5 != 0) {
        uVar1 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        iVar4 = iVar4 + (uVar1 >> 4) * 2;
        if (iVar4 < 0) {
          uVar2 = (uint)*(ushort *)((int)param_1 + iVar4 + iVar3 * -2) -
                  (uint)*(ushort *)((int)param_2 + iVar4 + iVar3 * -2);
        }
        break;
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0);
  }
  else {
    uVar2 = (uint)*param_1 - (uint)*param_2;
  }
  if (local_8 != (ushort *)0x0 || local_4 != (ushort *)0x0) {
    FUN_004072fc(&local_8,2);
  }
  return uVar2;
}
