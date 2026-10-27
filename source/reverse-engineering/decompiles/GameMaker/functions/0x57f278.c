// rea decompile_all
// name: FUN_0057f278
// address: 0x57f278
// body: available
// range: 0x57f278-0x57f356 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057f278(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte local_198 [128];
  undefined1 local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = *(int *)(*(int *)(param_1 + 0x1be) + 0x18);
  local_8 = param_2 >> 2;
  local_c = param_3 >> 3;
  iVar5 = local_c * 0x20 + 2;
  iVar4 = local_8 * 0x20 + 4;
  local_14 = (param_4 >> 2) * 0x20 + 4;
  uVar1 = FUN_0057eec0(param_1,iVar4,iVar5,local_118,local_14);
  FUN_0057f100(param_1,iVar4,iVar5,local_198,local_118,uVar1,local_14);
  local_8 = local_8 * 4;
  local_c = local_c * 8;
  pbVar3 = local_198;
  local_18 = 0;
  do {
    iVar4 = 0;
    do {
      psVar2 = (short *)(*(int *)(local_10 + (local_8 + local_18) * 4) + (local_c + iVar4) * 0x40 +
                        (param_4 >> 2) * 8);
      iVar5 = 0;
      do {
        *psVar2 = *pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
        psVar2 = psVar2 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    local_18 = local_18 + 1;
  } while (local_18 < 4);
  return;
}
