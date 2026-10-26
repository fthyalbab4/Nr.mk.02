// rea decompile_all
// name: FUN_00557b68
// address: 0x557b68
// body: available
// range: 0x557b68-0x557c64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00557b68(int param_1,int *param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;

  iVar2 = *(int *)(param_1 + 0x1c4);
  if (*(int *)(param_1 + 0x138) <= *(int *)(iVar2 + 0x5c)) {
    local_10 = 0;
    local_14 = *(int *)(param_1 + 0xd8);
    local_1c = (undefined4 *)(iVar2 + 0x34);
    local_20 = param_2;
    for (; local_10 < *(int *)(param_1 + 0x24); local_10 = local_10 + 1) {
      (*(code *)*local_1c)
                (param_1,local_14,*param_3 * local_1c[0xc] * 4 + *local_20,
                 local_10 * 4 + iVar2 + 0xc);
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
      local_14 = local_14 + 0x54;
    }
    *(undefined4 *)(iVar2 + 0x5c) = 0;
  }
  local_18 = *(int *)(param_1 + 0x138) - *(int *)(iVar2 + 0x5c);
  if (*(uint *)(iVar2 + 0x60) < local_18) {
    local_18 = *(uint *)(iVar2 + 0x60);
  }
  uVar1 = param_4 - *param_5;
  if (uVar1 < local_18) {
    local_18 = uVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x1c8) + 4))
            (param_1,iVar2 + 0xc,*(int *)(iVar2 + 0x5c),local_18,*param_5 * 4 + param_6);
  *param_5 = *param_5 + local_18;
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) - local_18;
  iVar3 = *(int *)(iVar2 + 0x5c) + local_18;
  *(int *)(iVar2 + 0x5c) = iVar3;
  if (*(int *)(param_1 + 0x138) <= iVar3) {
    *param_3 = *param_3 + 1;
  }
  return;
}
