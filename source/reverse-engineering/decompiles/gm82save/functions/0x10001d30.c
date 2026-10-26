// rea decompile_all
// name: FUN_10001d30
// address: 0x10001d30
// body: available
// range: 0x10001d30-0x10001e16 inclusive
// range: 0x10001e20-0x10001eb3 inclusive
// range: 0x10001ec0-0x1000208e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10001d30(int *param_1,int param_2,int param_3,void *param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_98;
  int local_64;
  int local_60;
  int local_5c;
  char local_58 [8];
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  uint local_34;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;

  FUN_100969a0((undefined4 *)local_58,param_2,param_3,param_4,param_5);
  if (local_58[0] == '\0') {
    do {
      FUN_10092330(&local_64,(int *)local_58);
    } while (local_64 == 1);
    local_3c = local_60;
    if (local_64 == 0) goto LAB_10002022;
  }
  else {
    iVar2 = local_1c - 1;
    local_98 = local_34;
    if (local_34 == 0xffffffff) {
      uVar4 = local_3c + iVar2;
      if (uVar4 < local_24) {
        uVar5 = local_1c;
        if (local_1c < local_48) {
          uVar5 = local_48;
        }
LAB_10001f60:
        do {
          uVar6 = local_50;
          if ((*(byte *)(local_28 + uVar4) & 0x20) != 0) {
            uVar6 = local_4c;
          }
          if ((uVar6 >> (*(byte *)(local_28 + uVar4) & 0x1f) & 1) == 0) {
            local_3c = local_3c + local_1c;
          }
          else {
            uVar4 = local_48;
            do {
              uVar6 = uVar4;
              uVar4 = local_48;
              if (uVar5 == uVar6) goto LAB_10001fd0;
              if (local_24 <= uVar6 + local_3c) {
                uVar5 = local_48 + local_3c;
                goto LAB_10002067;
              }
              uVar4 = uVar6 + 1;
            } while (*(char *)(local_20 + uVar6) == *(char *)(local_28 + local_3c + uVar6));
            local_3c = (local_3c - local_48) + 1 + uVar6;
          }
          uVar4 = local_3c + iVar2;
        } while (uVar4 < local_24);
      }
    }
    else {
      uVar4 = local_3c + iVar2;
      if (uVar4 < local_24) {
LAB_10001e3a:
        uVar5 = local_50;
        if ((*(byte *)(local_28 + uVar4) & 0x20) != 0) {
          uVar5 = local_4c;
        }
        if ((uVar5 >> (*(byte *)(local_28 + uVar4) & 0x1f) & 1) == 0) {
          local_3c = local_3c + local_1c;
          local_98 = 0;
        }
        else {
          uVar5 = local_48;
          if (local_48 < local_98) {
            uVar5 = local_98;
          }
          uVar4 = uVar5;
          uVar6 = local_1c;
          if (local_1c < uVar5) {
            uVar6 = uVar5;
          }
          do {
            uVar3 = uVar4;
            uVar4 = local_48;
            if (uVar6 == uVar3) goto LAB_10001ed0;
            if (local_24 <= uVar3 + local_3c) {
              uVar5 = uVar5 + local_3c;
LAB_10002067:
              if (uVar5 < local_24) {
                uVar5 = local_24;
              }
              FUN_10136b52(uVar5,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar4 = uVar3 + 1;
          } while (*(char *)(local_20 + uVar3) == *(char *)(local_28 + local_3c + uVar3));
          local_98 = 0;
          local_3c = (local_3c - local_48) + 1 + uVar3;
        }
        goto joined_r0x10001e34;
      }
    }
  }
LAB_10002011:
  *param_1 = 0;
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    if (local_1c <= local_48 - 1) goto LAB_1000207d;
    uVar6 = uVar4 + local_3c;
    if (local_24 <= uVar6) goto LAB_10002050;
    if (*(char *)(local_20 + uVar4) != *(char *)(local_28 + uVar6)) break;
LAB_10001fd0:
    if (uVar4 == 0) goto LAB_1000201d;
  }
  local_3c = local_3c + local_40;
  uVar4 = local_3c + iVar2;
  if (local_24 <= uVar4) goto LAB_10002011;
  goto LAB_10001f60;
LAB_10001ed0:
  do {
    if (uVar4 <= local_98) goto LAB_1000201d;
    uVar4 = uVar4 - 1;
    if (local_1c <= uVar4) {
LAB_1000207d:
      FUN_10136b52(uVar4,local_1c,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = uVar4 + local_3c;
    if (local_24 <= uVar6) {
LAB_10002050:
      FUN_10136b52(uVar6,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  } while (*(char *)(local_20 + uVar4) == *(char *)(local_28 + uVar6));
  local_3c = local_3c + local_40;
  local_98 = local_1c - local_40;
joined_r0x10001e34:
  uVar4 = local_3c + iVar2;
  if (local_24 <= uVar4) goto LAB_10002011;
  goto LAB_10001e3a;
LAB_1000201d:
  local_5c = local_1c + local_3c;
LAB_10002022:
  *param_1 = param_2;
  param_1[1] = local_3c;
  param_1[2] = local_5c + param_2;
  param_1[3] = param_3 - local_5c;
  return;
}
