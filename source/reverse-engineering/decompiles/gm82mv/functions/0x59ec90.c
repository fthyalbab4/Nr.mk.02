// rea decompile_all
// name: FUN_0059ec90
// address: 0x59ec90
// body: available
// range: 0x59ec90-0x59ed18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059ec90(int param_1,code *param_2)

{
  uint uVar1;
  int *piVar2;
  uint unaff_EBP;
  int iVar3;
  uint local_1c;
  int local_18;
  int local_c;

  local_18 = 0;
  local_1c = 0;
  while ((local_1c < *(ushort *)(param_1 + 8) && (local_18 == 0))) {
    piVar2 = *(int **)(*(int *)(param_1 + 4) + local_1c * 4);
    if (piVar2 != (int *)0x0) {
      iVar3 = 0;
      uVar1 = (uint)*(ushort *)(param_1 + 0xc);
      local_c = local_1c << ((byte)*(ushort *)(param_1 + 0xc) & 0x1f);
      while ((iVar3 < (int)(uint)*(ushort *)(param_1 + 0x14) && (local_18 == 0))) {
        if (*piVar2 != 0) {
          local_18 = (*param_2)(local_c,*piVar2,uVar1);
          uVar1 = unaff_EBP;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + 1;
        local_c = local_c + 1;
      }
    }
    local_1c = local_1c + 1;
  }
  return local_18;
}
