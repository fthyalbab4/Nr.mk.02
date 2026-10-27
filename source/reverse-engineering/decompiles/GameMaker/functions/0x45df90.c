// rea decompile_all
// name: FUN_0045df90
// address: 0x45df90
// body: available
// range: 0x45df90-0x45e073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045df90(HANDLE param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 auStack_60 [4];
  uint local_5c;
  uint local_58;
  short local_50;
  short local_4e;
  uint local_48 [15];

  local_48[0] = 0;
  iVar1 = GetObjectW(param_1,0x54,auStack_60);
  if (iVar1 == 0) {
    FUN_0045d0e4();
  }
  else if ((iVar1 < 0x40) || (local_48[0] < 0x28)) {
    FUN_00404f08(param_2,0x28,0);
    *param_2 = 0x28;
    param_2[1] = local_5c;
    param_2[2] = local_58;
  }
  else {
    puVar3 = local_48;
    puVar4 = param_2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (param_3 == 2) {
    *(undefined2 *)((int)param_2 + 0xe) = 1;
  }
  else if (param_3 - 3 < 0xe) {
    *(undefined2 *)((int)param_2 + 0xe) = 4;
    param_2[8] = param_3;
  }
  else if (param_3 - 0x11 < 0xf0) {
    *(undefined2 *)((int)param_2 + 0xe) = 8;
    param_2[8] = param_3;
  }
  else {
    *(short *)((int)param_2 + 0xe) = local_4e * local_50;
  }
  *(undefined2 *)(param_2 + 3) = 1;
  if (param_2[8] < param_2[9]) {
    param_2[9] = param_2[8];
  }
  if (param_2[5] == 0) {
    iVar1 = FUN_0045d394(param_2[1],*(undefined2 *)((int)param_2 + 0xe),0x20);
    uVar2 = (int)param_2[2] >> 0x1f;
    param_2[5] = iVar1 * ((param_2[2] ^ uVar2) - uVar2);
  }
  return;
}
