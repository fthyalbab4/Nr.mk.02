// rea decompile_all
// name: FUN_10093970
// address: 0x10093970
// body: available
// range: 0x10093970-0x10093999 inclusive
// range: 0x100939a0-0x10093b20 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10093970(undefined8 *param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  SIZE_T local_28;
  LPVOID pvStack_24;
  int local_20;
  undefined1 local_19;
  ushort *local_18;
  undefined8 *local_14;

  local_18 = param_2;
  if ((param_3 & 1) == 0) {
    bVar1 = (byte)*param_2;
    if (bVar1 != 0) {
      uVar10 = 0;
      bVar3 = 0;
      puVar7 = param_2;
      do {
        puVar6 = (ushort *)((int)puVar7 + 1);
        if ((char)bVar1 < '\0') {
          if (SBORROW1('\0',bVar1)) {
            uVar10 = uVar10 + *puVar6;
            puVar7 = (ushort *)((int)puVar7 + *puVar6 + 3);
          }
          else {
            bVar3 = bVar3 | uVar10 == 0;
            uVar5 = CONCAT11(bVar1 >> 1,bVar1 >> 2) & 0x2ff;
            uVar8 = CONCAT11(bVar1,bVar1 << 5) & 0xffffff40;
            puVar7 = (ushort *)
                     ((int)puVar6 +
                     (uint)((byte)((byte)uVar8 | (char)(uVar8 >> 8) << 7) >> 5) +
                     (uint)((byte)uVar5 & 2) + (uint)(uVar5 >> 8));
          }
        }
        else {
          uVar10 = uVar10 + bVar1;
          puVar7 = (ushort *)((int)puVar6 + (uint)bVar1);
        }
        bVar1 = (byte)*puVar7;
      } while (bVar1 != 0);
      uVar8 = 0;
      local_14 = param_1;
      if ((!(bool)(bVar3 & uVar10 < 0x10)) && (uVar8 = uVar10 * 2, (int)uVar8 < 0)) {
        FUN_101367b0();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_10093a1f;
    }
    local_28 = 0;
    pvStack_24 = (LPVOID)0x1;
  }
  else {
    uVar8 = param_3 >> 1;
LAB_10093a1f:
    if (uVar8 == 0) {
      pvStack_24 = (LPVOID)0x1;
    }
    else {
      pvStack_24 = FUN_10107380(0,uVar8);
      if (pvStack_24 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    local_20 = 0;
    local_28 = uVar8;
    if ((param_3 & 1) != 0) {
      uVar10 = param_3 >> 1;
      if (uVar8 < uVar10) {
        FUN_101366d0(&local_28,0,uVar10);
LAB_10093a64:
        iVar9 = local_20;
        memcpy((void *)((int)pvStack_24 + local_20),local_18,uVar10);
      }
      else {
        iVar9 = 0;
        if (uVar10 != 0) goto LAB_10093a64;
      }
      local_20 = iVar9 + uVar10;
      goto LAB_10093ab3;
    }
  }
  local_20 = 0;
  uVar4 = FUN_10093d70(&local_28,0x10144194,local_18,param_3);
  if ((char)uVar4 != '\0') {
    FUN_10136c40("a formatting trait implementation returned an error when the underlying stream did not"
                 ,0x56,&local_19,&DAT_101440fc,&PTR_s_C__Users_runneradmin__rustup_too_10144184);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_10093ab3:
  *(int *)(param_1 + 1) = local_20;
  *param_1 = CONCAT44(pvStack_24,local_28);
  return;
}
