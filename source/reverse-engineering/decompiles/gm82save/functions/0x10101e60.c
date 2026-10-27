// rea decompile_all
// name: FUN_10101e60
// address: 0x10101e60
// body: available
// range: 0x10101e60-0x10101f09 inclusive
// range: 0x10101f10-0x10101fba inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10101ec0 to 0x101018c0 FUN_101018c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10101e60(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  iVar3 = *param_1;
  if (iVar3 != 0) {
    uVar11 = param_1[1];
    uVar6 = param_1[2];
    if (uVar6 < uVar11) {
      if (*(char *)(iVar3 + uVar6) == 'K') {
        param_1[2] = uVar6 + 1;
        uVar2 = FUN_10101fc0(param_1,'\0');
      }
      else {
        if (*(char *)(iVar3 + uVar6) != 'L') goto LAB_10101eb6;
        uVar10 = uVar6 + 1;
        param_1[2] = uVar10;
        if ((uVar10 < uVar11) && (*(char *)(iVar3 + uVar10) == '_')) {
          uVar11 = 0;
          param_1[2] = uVar6 + 2;
          iVar3 = 0;
LAB_10101fa8:
          uVar2 = FUN_101026a0(param_1,uVar11,iVar3);
        }
        else {
          uVar12 = 0;
          uVar6 = 0;
          do {
            if (uVar11 == uVar10) break;
            cVar1 = *(char *)(iVar3 + uVar10);
            if (cVar1 == '_') {
              param_1[2] = uVar10 + 1;
              if ((uVar12 & uVar6) != 0xffffffff) {
                uVar11 = uVar12 + 1;
                iVar3 = uVar6 + (0xfffffffe < uVar12);
                goto LAB_10101fa8;
              }
              break;
            }
            bVar9 = cVar1 - 0x30;
            if (9 < bVar9) {
              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                bVar9 = cVar1 + 0xa9;
              }
              else {
                if (0x19 < (byte)(cVar1 + 0xbfU)) break;
                bVar9 = cVar1 - 0x1d;
              }
            }
            uVar10 = uVar10 + 1;
            param_1[2] = uVar10;
            uVar4 = (uint)((ulonglong)uVar6 * 0x3e);
            uVar7 = (uint)((ulonglong)uVar12 * 0x3e >> 0x20);
            uVar5 = (uint)((ulonglong)uVar12 * 0x3e);
            uVar8 = uVar7 + uVar4;
            if (CARRY4(uVar7,uVar4) || (int)((ulonglong)uVar6 * 0x3e >> 0x20) != 0) break;
            uVar12 = uVar5 + bVar9;
            uVar4 = (uint)CARRY4(uVar5,(uint)bVar9);
            uVar6 = uVar8 + uVar4;
          } while (!CARRY4(uVar8,uVar4));
          if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
             (cVar1 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                                   &DAT_00000010), cVar1 != '\0')) {
            return 1;
          }
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 0;
          uVar2 = 0;
        }
      }
      return uVar2;
    }
  }
LAB_10101eb6:
  uVar2 = FUN_101018c0(param_1);
  return uVar2;
}
