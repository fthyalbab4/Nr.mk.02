// rea decompile_all
// name: FUN_005a2220
// address: 0x5a2220
// body: available
// range: 0x5a2220-0x5a242f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2220(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5
                 )

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char local_6034 [4096];
  char local_5034 [4096];
  uint local_4034 [3070];
  uint local_34;
  char local_29;
  uint local_28;
  uint local_24;
  uint local_20;
  byte *local_18;
  uint local_14;
  uint local_10;

  iVar2 = 6;
  do {
    iVar4 = iVar2;
    iVar2 = iVar4 + -1;
  } while (iVar4 + -1 != 0);
  pcVar10 = (char *)*param_3;
  local_18 = (byte *)*param_2;
  local_20 = *(byte *)(iVar4 + 4) + 1;
  uVar3 = 1 << (*(byte *)(iVar4 + 4) & 0x1f);
  uVar5 = uVar3 + 2;
  local_28 = 0x1000;
  local_24 = (1 << ((byte)local_20 & 0x1f)) - 1;
  local_34 = (uint)uVar3;
  if (-1 < (int)(local_34 - 1)) {
    cVar1 = '\0';
    puVar7 = local_4034;
    pcVar6 = local_5034;
    do {
      *puVar7 = 0x1000;
      *pcVar6 = cVar1;
      cVar1 = cVar1 + '\x01';
      pcVar6 = pcVar6 + 1;
      puVar7 = puVar7 + 1;
      local_34 = local_34 - 1;
    } while (local_34 != 0);
  }
  pcVar6 = local_6034;
  local_29 = '\0';
  local_10 = 0;
  local_14 = 0;
  do {
    if ((param_4 < 1) || (param_5 < 1)) {
      return;
    }
    local_10 = local_10 + ((uint)*local_18 << ((byte)local_14 & 0x1f));
    local_14 = local_14 + 8;
    if (local_20 <= local_14) {
      do {
        uVar8 = local_10 & local_24;
        local_10 = local_10 >> ((byte)local_20 & 0x1f);
        local_14 = local_14 - local_20;
        if (uVar8 == (ushort)(uVar3 + 1)) break;
        if (uVar8 == uVar3) {
          local_20 = *(byte *)(iVar4 + 4) + 1;
          local_24 = (1 << ((byte)local_20 & 0x1f)) - 1;
          uVar5 = uVar3 + 2;
          local_28 = 0x1000;
        }
        else {
          if (uVar5 < uVar8) break;
          if (local_28 == 0x1000) {
            local_29 = local_5034[uVar8];
            *pcVar10 = local_29;
            pcVar10 = pcVar10 + 1;
            param_4 = param_4 + -1;
            local_28 = uVar8;
          }
          else {
            uVar9 = uVar8;
            if (uVar5 == uVar8) {
              *pcVar6 = local_29;
              pcVar6 = pcVar6 + 1;
              uVar9 = local_28;
            }
            for (; uVar3 < uVar9; uVar9 = local_4034[uVar9]) {
              *pcVar6 = local_5034[uVar9];
              pcVar6 = pcVar6 + 1;
            }
            local_29 = local_5034[uVar9];
            *pcVar6 = local_29;
            pcVar6 = pcVar6 + 1;
            local_4034[uVar5] = local_28;
            local_5034[uVar5] = local_29;
            if ((uVar5 == local_24) && (local_20 < 0xc)) {
              local_20 = local_20 + 1;
              local_24 = (1 << ((byte)local_20 & 0x1f)) - 1;
            }
            if (uVar5 < 0xfff) {
              uVar5 = uVar5 + 1;
            }
            do {
              pcVar6 = pcVar6 + -1;
              *pcVar10 = *pcVar6;
              pcVar10 = pcVar10 + 1;
              param_4 = param_4 + -1;
              local_28 = uVar8;
            } while (pcVar6 != local_6034);
          }
        }
      } while (local_20 <= local_14);
    }
    local_18 = local_18 + 1;
    param_5 = param_5 + -1;
  } while( true );
}
