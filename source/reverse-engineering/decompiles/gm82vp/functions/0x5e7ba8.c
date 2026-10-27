// rea decompile_all
// name: FUN_005e7ba8
// address: 0x5e7ba8
// body: available
// range: 0x5e7ba8-0x5e7db4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e7ba8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5
                 )

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char local_6030 [4096];
  char local_5030 [4096];
  uint local_4030 [3070];
  int local_30;
  char local_25;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte *local_14;
  uint local_10;
  uint local_c;

  iVar2 = 6;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar7 = (char *)*param_3;
  local_14 = (byte *)*param_2;
  local_20 = 0x102;
  local_24 = 0x1000;
  uVar8 = 9;
  local_1c = 0x1ff;
  local_30 = 0x100;
  cVar1 = '\0';
  puVar3 = local_4030;
  pcVar6 = local_5030;
  do {
    *puVar3 = 0x1000;
    *pcVar6 = cVar1;
    cVar1 = cVar1 + '\x01';
    pcVar6 = pcVar6 + 1;
    puVar3 = puVar3 + 1;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  pcVar6 = local_6030;
  local_25 = '\0';
  local_c = 0;
  local_10 = 0;
  do {
    if ((param_5 < 1) || (param_4 < 1)) {
      return;
    }
    local_c = local_c + ((uint)*local_14 << (0x18U - (char)local_10 & 0x1f));
    local_10 = local_10 + 8;
    if (uVar8 <= local_10) {
      do {
        uVar4 = (-local_1c - 1 & local_c) >> (0x20 - (byte)uVar8 & 0x1f);
        local_c = local_c << ((byte)uVar8 & 0x1f);
        local_10 = local_10 - uVar8;
        if (uVar4 == 0x101) {
          return;
        }
        if (uVar4 == 0x100) {
          uVar8 = 9;
          local_1c = 0x1ff;
          local_20 = 0x102;
          local_24 = 0x1000;
        }
        else {
          if (local_20 < uVar4) break;
          if (local_24 == 0x1000) {
            local_25 = local_5030[uVar4];
            *pcVar7 = local_25;
            pcVar7 = pcVar7 + 1;
            param_4 = param_4 + -1;
            local_24 = uVar4;
          }
          else {
            uVar5 = uVar4;
            if (uVar4 == local_20) {
              *pcVar6 = local_25;
              pcVar6 = pcVar6 + 1;
              uVar5 = local_24;
            }
            for (; 0x100 < uVar5; uVar5 = local_4030[uVar5]) {
              *pcVar6 = local_5030[uVar5];
              pcVar6 = pcVar6 + 1;
            }
            local_25 = local_5030[uVar5];
            *pcVar6 = local_25;
            pcVar6 = pcVar6 + 1;
            local_4030[local_20] = local_24;
            local_5030[local_20] = local_25;
            if (local_20 < 0x1000) {
              local_20 = local_20 + 1;
            }
            if ((local_20 == local_1c) && (uVar8 < 0xc)) {
              uVar8 = uVar8 + 1;
              local_1c = (1 << ((byte)uVar8 & 0x1f)) - 1;
            }
            do {
              pcVar6 = pcVar6 + -1;
              *pcVar7 = *pcVar6;
              pcVar7 = pcVar7 + 1;
              param_4 = param_4 + -1;
              local_24 = uVar4;
            } while (local_6030 < pcVar6);
          }
        }
      } while (uVar8 <= local_10);
    }
    local_14 = local_14 + 1;
    param_5 = param_5 + -1;
  } while( true );
}
