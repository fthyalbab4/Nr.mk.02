// rea decompile_all
// name: FUN_005a206c
// address: 0x5a206c
// body: available
// range: 0x5a206c-0x5a212c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a206c(int param_1,undefined4 *param_2,int *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  ushort *puVar7;
  ushort *local_8;

  if (*(char *)(param_1 + 4) == '\b') {
    pbVar5 = (byte *)*param_2;
    iVar6 = *param_3;
    while( true ) {
      pbVar4 = pbVar5 + 1;
      uVar3 = (uint)(*pbVar5 & 0x7f);
      if (uVar3 == 0) break;
      if ((*pbVar5 & 0x80) == 0) {
        pbVar5 = pbVar5 + 2;
        FUN_00404f08(iVar6,uVar3,*pbVar4);
        iVar6 = iVar6 + uVar3;
      }
      else {
        FUN_0040450c(pbVar4,iVar6,uVar3);
        iVar6 = iVar6 + uVar3;
        pbVar5 = pbVar4 + uVar3;
      }
    }
  }
  else {
    puVar7 = (ushort *)*param_3;
    local_8 = (ushort *)*param_2;
    while( true ) {
      puVar1 = local_8 + 1;
      uVar2 = *local_8 >> 8 & 0x7f;
      uVar3 = (uint)uVar2;
      if (uVar3 == 0) break;
      if ((*local_8 & 0x8000) == 0) {
        uVar2 = *puVar1;
        local_8 = local_8 + 2;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        FUN_0040450c(puVar1,puVar7,uVar3 * 2);
        *puVar1 = *puVar1 + uVar2;
        *puVar7 = *puVar7 + uVar2;
        local_8 = puVar1;
      }
    }
  }
  return;
}
