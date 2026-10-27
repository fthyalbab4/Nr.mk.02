// rea decompile_all
// name: FUN_1011ce10
// address: 0x1011ce10
// body: available
// range: 0x1011ce10-0x1011ce3d inclusive
// range: 0x1011ce40-0x1011ce84 inclusive
// range: 0x1011ce90-0x1011cea0 inclusive
// range: 0x1011ceb0-0x1011ceee inclusive
// range: 0x1011cef0-0x1011cf33 inclusive
// range: 0x1011cf40-0x1011d06b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011ce10(uint *param_1,HANDLE param_2,uint *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  byte bVar7;
  uint unaff_EBX;
  int *piVar8;
  uint uVar9;
  undefined4 local_48;
  int *local_44;
  uint *local_40;
  HANDLE local_3c;
  int local_38;
  LPVOID local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_38 = 0x1011ce1f;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_40 = param_1;
  local_3c = param_2;
  do {
    FUN_10112300((undefined1 *)&local_48,param_2,&local_30,0x20);
    piVar8 = local_44;
    if (3 < (local_48 & 0xff)) {
joined_r0x1011d037:
      if (&DAT_00000020 < piVar8) {
        FUN_10136a50(0,(uint)piVar8,0x20,&PTR_s_C__Users_runneradmin__rustup_too_10156bf0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar9 = param_3[2];
      if ((int *)(*param_3 - uVar9) < piVar8) {
        FUN_101359e0(param_3,uVar9,(uint)piVar8,(LPVOID)0x1,1);
        uVar9 = param_3[2];
      }
      else if (piVar8 == (int *)0x0) goto LAB_1011d015;
      memcpy((void *)(param_3[1] + uVar9),&local_30,(size_t)piVar8);
LAB_1011d015:
      param_3[2] = (uint)(uVar9 + (int)piVar8);
      local_40[1] = (uint)piVar8;
      *(undefined1 *)local_40 = 0xff;
      return;
    }
    switch((&switchD_1011ce71::switchdataD_1011d06c)[local_48 & 0xff] + local_38) {
    case 0x1011ce73:
      uVar4 = FUN_1010dc70((int)local_44);
      if ((char)uVar4 != '\v') goto LAB_1011cf01;
      goto LAB_1011cfdd;
    case 0x1011ce90:
      cVar3 = (char)local_44[2];
      break;
    case 0x1011ceb0:
      if ((char)local_44[2] != '\v') goto LAB_1011cf01;
      puVar1 = (undefined4 *)local_44[1];
      pvVar6 = (LPVOID)*local_44;
      if ((code *)*puVar1 != (code *)0x0) {
        local_34 = pvVar6;
        (*(code *)*puVar1)(pvVar6);
        pvVar6 = local_34;
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar6 = *(LPVOID *)((int)pvVar6 + -4);
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar6);
      }
      unaff_EBX = unaff_EBX | 0xff;
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,piVar8);
      bVar7 = (byte)unaff_EBX;
      piVar8 = (int *)0x0;
      param_2 = local_3c;
      goto joined_r0x1011cfca;
    case 0x1011cef0:
      cVar3 = local_48._1_1_;
    }
    if (cVar3 == '\v') {
LAB_1011cfdd:
      piVar8 = (int *)0x0;
      goto joined_r0x1011d037;
    }
LAB_1011cf01:
    bVar7 = (byte)local_48;
    unaff_EBX = local_48;
    piVar8 = local_44;
joined_r0x1011cfca:
    if (3 < bVar7) goto joined_r0x1011d037;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((&switchD_1011cf1b::switchdataD_1011d07c)[unaff_EBX & 0xff] + local_38) {
    case 0x1011ce40:
      if ((char)piVar8[2] != '#') {
switchD_1011cf1b_caseD_0:
        *local_40 = unaff_EBX;
        local_40[1] = (uint)piVar8;
        return;
      }
      break;
    case 0x1011cf1d:
      if ((unaff_EBX & 0xff00) != 0x2300) goto switchD_1011cf1b_caseD_0;
      break;
    case 0x1011cf40:
      if ((char)piVar8[2] != '#') goto switchD_1011cf1b_caseD_0;
      puVar1 = (undefined4 *)piVar8[1];
      pvVar6 = (LPVOID)*piVar8;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar6);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar6 = *(LPVOID *)((int)pvVar6 + -4);
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar6);
      }
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,piVar8);
      param_2 = local_3c;
      break;
    case 0x1011cfd2:
      goto switchD_1011cf1b_caseD_0;
    }
  } while( true );
}
