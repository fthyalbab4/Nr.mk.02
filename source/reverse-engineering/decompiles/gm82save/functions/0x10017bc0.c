// rea decompile_all
// name: FUN_10017bc0
// address: 0x10017bc0
// body: available
// range: 0x10017bc0-0x100180d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10017bc0(undefined8 *param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  char local_44;
  undefined7 uStack_43;
  uint local_3c;
  undefined8 *local_38;
  int *piStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int local_18;
  longlong *local_14;

  local_3c = 400;
  plVar1 = (longlong *)*param_4;
  FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
  if (local_44 == -1) {
    local_3c = param_3;
    local_38 = param_1;
    FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
    if (local_44 == -1) {
      piVar4 = (int *)&DAT_00000004;
      if (param_2 != (int *)0x0) {
        piVar4 = param_2;
      }
      if (param_3 != 0) {
        local_18 = param_3 << 2;
        local_14 = plVar1;
        do {
          (*(code *)0x710544)();
          plVar1 = local_14;
          local_3c = 0x1b8;
          FUN_10092830((uint *)&local_44,local_14,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = *(uint *)(*piVar4 + 4);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) {
LAB_100180cc:
            uVar5 = CONCAT71(uStack_43,local_44);
            goto LAB_10017c28;
          }
          local_3c = *(uint *)(*piVar4 + 8);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = *(uint *)(*piVar4 + 0xc);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = (uint)*(byte *)(*piVar4 + 0x10);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = (uint)*(byte *)(*piVar4 + 0x11);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = (uint)*(byte *)(*piVar4 + 0x12);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = *(uint *)(*piVar4 + 0x14);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = *(uint *)(*piVar4 + 0x20);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = 8;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          iVar2 = *piVar4;
          uStack_1c = *(uint *)(iVar2 + 0x2c);
          local_3c = *(uint *)(iVar2 + 0x24);
          uVar3 = *(uint *)(iVar2 + 0x28);
          uStack_20 = *(uint *)(iVar2 + 0x30);
          uStack_24 = *(uint *)(iVar2 + 0x34);
          uStack_28 = *(uint *)(iVar2 + 0x38);
          uStack_2c = *(uint *)(iVar2 + 0x3c);
          uStack_30 = *(uint *)(iVar2 + 0x40);
          piStack_34 = piVar4;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uVar3;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uStack_1c;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uStack_20;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uStack_24;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uStack_28;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uStack_2c;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = uStack_30;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          piVar4 = piStack_34;
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = *(uint *)(*piStack_34 + 0x44);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = (uint)*(byte *)(*piVar4 + 0x48);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_100180cc;
          local_3c = 8;
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          if (local_44 != -1) goto LAB_10017c1f;
          FUN_10018210(&local_44,param_4);
          piVar4 = piStack_34;
          if (local_44 != -1) goto LAB_10017c1f;
          local_3c = (uint)*(byte *)(*piStack_34 + 0x6c);
          FUN_10092830((uint *)&local_44,plVar1,(int)&local_3c,(undefined **)&DAT_00000004);
          if (local_44 != -1) goto LAB_10017c1f;
          piVar4 = piVar4 + 1;
          local_18 = local_18 + -4;
        } while (local_18 != 0);
      }
      *(undefined1 *)local_38 = 0xff;
    }
    else {
LAB_10017c1f:
      uVar5 = CONCAT71(uStack_43,local_44);
LAB_10017c28:
      *local_38 = uVar5;
    }
  }
  else {
    *param_1 = CONCAT71(uStack_43,local_44);
  }
  return;
}
