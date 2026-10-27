// rea decompile_all
// name: FUN_100db030
// address: 0x100db030
// body: available
// range: 0x100db030-0x100db1fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100db030(uint *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_60;
  undefined1 local_58 [5];
  undefined1 auStack_53 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;

  iVar11 = param_2[1];
  uVar7 = *(uint *)(iVar11 + 0x1c);
  uVar10 = param_2[2];
  if (param_3 + 1U < uVar7) {
    iVar9 = *param_2;
    do {
      *(uint *)(iVar11 + 0x1c) = uVar7 - 1;
      iVar8 = (uVar7 - 1) * 0x10;
      local_60 = *(undefined8 *)(*(int *)(iVar11 + 0x18) + iVar8);
      uVar1 = *(undefined8 *)(*(int *)(iVar11 + 0x18) + 8 + iVar8);
      local_58[4] = (char)((ulonglong)uVar1 >> 0x20);
      cVar2 = local_58[4];
      auStack_53[0] = (undefined1)((ulonglong)uVar1 >> 0x28);
      uVar3 = auStack_53[0];
      auStack_53[1] = (undefined1)((ulonglong)uVar1 >> 0x30);
      uVar4 = auStack_53[1];
      auStack_53 = SUB83((ulonglong)uVar1 >> 0x28,0);
      local_58._0_4_ = (undefined4)uVar1;
      uVar6 = local_58._0_4_;
      local_58 = (undefined1  [5])CONCAT14(0,local_58._0_4_);
      if (cVar2 == '\x01') {
        if (local_58._0_4_ == (uint)local_60) {
          FUN_10135ee0((uint *)&local_60);
        }
        *(uint *)(local_60._4_4_ + uVar6 * 8) = uVar10;
        *(undefined1 *)(local_60._4_4_ + 4 + uVar6 * 8) = uVar3;
        *(undefined1 *)(local_60._4_4_ + 5 + uVar6 * 8) = uVar4;
        _local_58 = CONCAT44(stack0xffffffac,uVar6 + 1);
      }
      local_18 = local_58._0_4_;
      local_20 = local_60;
      FUN_100db200((undefined4 *)&local_60,iVar9,iVar11,(int *)&local_20);
      if ((uint)local_60 != 0xfffffffe) {
        *(undefined8 *)(param_1 + 0xc) = local_30;
        *(undefined8 *)(param_1 + 10) = local_38;
        *(undefined8 *)(param_1 + 0xe) = local_28;
        *(undefined8 *)(param_1 + 8) = local_40;
        *(undefined8 *)(param_1 + 6) = local_48;
        *(undefined8 *)(param_1 + 4) = local_50;
        *(undefined8 *)(param_1 + 2) = _local_58;
        *param_1 = (uint)local_60;
        param_1[1] = local_60._4_4_;
        return;
      }
      uVar7 = *(uint *)(iVar11 + 0x1c);
      uVar10 = local_60._4_4_;
    } while (param_3 + 1U < uVar7);
  }
  if (uVar7 != 0) {
    iVar11 = *(int *)(iVar11 + 0x18);
    iVar9 = uVar7 * 0x10;
    cVar2 = *(char *)(iVar11 + -4 + iVar9);
    uVar3 = *(undefined1 *)(iVar11 + -3 + iVar9);
    uVar4 = *(undefined1 *)(iVar11 + -2 + iVar9);
    *(undefined1 *)(iVar11 + -4 + iVar9) = 0;
    if (cVar2 == '\x01') {
      iVar11 = iVar11 + iVar9;
      iVar9 = *(int *)(iVar11 + -8);
      if (iVar9 == *(int *)(iVar11 + -0x10)) {
        FUN_10135ee0((uint *)(iVar11 + -0x10));
      }
      iVar8 = *(int *)(iVar11 + -0xc);
      *(uint *)(iVar8 + iVar9 * 8) = uVar10;
      *(undefined1 *)(iVar8 + 4 + iVar9 * 8) = uVar3;
      *(undefined1 *)(iVar8 + 5 + iVar9 * 8) = uVar4;
      *(int *)(iVar11 + -8) = iVar9 + 1;
    }
    *param_1 = 0xfffffffe;
    return;
  }
  FUN_10136c10("non-empty nodes",0xf,&PTR_s_C__Users_runneradmin__cargo_regi_101526b0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
