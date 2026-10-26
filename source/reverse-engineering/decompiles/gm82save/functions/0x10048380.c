// rea decompile_all
// name: FUN_10048380
// address: 0x10048380
// body: available
// range: 0x10048380-0x10048604 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10048380(undefined8 *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  char local_28;
  undefined7 uStack_27;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined8 *local_14;

  uVar5 = param_2[8];
  uVar3 = param_2[9];
  bVar1 = (char)param_2[10] + 2;
  *(byte *)(param_2 + 10) = bVar1;
  if (0x3f < bVar1) {
    if (param_2[1] != 0) goto LAB_100484fe;
    uVar6 = *param_2;
    local_20 = uVar6 + 8;
    uVar2 = 0xffffffff;
    if (uVar6 < 0xfffffff8) {
      uVar2 = local_20;
    }
    local_14 = param_1;
    local_1c = uVar3;
    local_18 = uVar5;
    if (param_2[2] < uVar2) {
      uVar5 = param_2[4];
      if (uVar2 - uVar5 <= param_2[2] - uVar5) goto LAB_100483de;
      FUN_101359e0(param_2 + 2,uVar5,uVar2 - uVar5,(LPVOID)0x1,1);
      uVar5 = param_2[4];
      sVar4 = uVar6 - uVar5;
      if (uVar6 < uVar5 || sVar4 == 0) goto LAB_10048418;
LAB_100483e7:
      uVar3 = param_2[3];
      memset((void *)(uVar5 + uVar3),0,sVar4);
      param_2[4] = uVar6;
      uVar5 = uVar6;
    }
    else {
LAB_100483de:
      uVar5 = param_2[4];
      sVar4 = uVar6 - uVar5;
      if (uVar5 <= uVar6 && sVar4 != 0) goto LAB_100483e7;
LAB_10048418:
      uVar3 = param_2[3];
    }
    *(uint *)(uVar3 + uVar6) = local_18;
    *(uint *)(uVar3 + 4 + uVar6) = local_1c;
    if (uVar5 < local_20) {
      param_2[4] = local_20;
    }
    *param_2 = uVar6 + 8;
    param_2[1] = (uint)(0xfffffff7 < uVar6);
    *(char *)(param_2 + 10) = (char)param_2[10] + -0x40;
    param_2[9] = 0;
    param_2[8] = 0;
    param_1 = local_14;
  }
  for (uVar5 = param_3 - 1; 0x101 < uVar5; uVar5 = uVar5 - 0x102) {
    FUN_10048220((undefined4 *)&local_28,param_2,0x157,0,'\n');
    if (local_28 != -1) goto LAB_10048542;
  }
  if (4 < uVar5) {
    FUN_10048220((undefined4 *)&local_28,param_2,
                 (uint)*(ushort *)(&DAT_101409d0 + (uint)*(ushort *)(&DAT_10140d9e + uVar5 * 2) * 2)
                 ,0,(&DAT_10140c0c)[*(ushort *)(&DAT_10140d9e + uVar5 * 2)]);
    if (local_28 != -1) {
      *param_1 = CONCAT71(uStack_27,local_28);
      return;
    }
    FUN_10048220((undefined4 *)&local_28,param_2,
                 uVar5 - 3 & *(uint *)(&DAT_101410a4 + (uint)(byte)(&UNK_10140fa1)[uVar5] * 4),0,
                 (&UNK_10140fa1)[uVar5] + 1);
    local_14 = param_1;
    if (local_28 != -1) {
LAB_10048542:
      *param_1 = CONCAT71(uStack_27,local_28);
      return;
    }
    goto LAB_100485fa;
  }
  local_18 = param_2[8];
  local_1c = param_2[9];
  bVar1 = (char)uVar5 * '\x02' + (char)param_2[10];
  *(byte *)(param_2 + 10) = bVar1;
  local_14 = param_1;
  if (bVar1 < 0x40) goto LAB_100485fa;
  if (param_2[1] != 0) {
LAB_100484fe:
    *(undefined ***)((int)param_1 + 4) = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
    *(undefined4 *)param_1 = 2;
    return;
  }
  uVar5 = *param_2;
  local_20 = uVar5 + 8;
  uVar3 = 0xffffffff;
  if (uVar5 < 0xfffffff8) {
    uVar3 = local_20;
  }
  if (param_2[2] < uVar3) {
    uVar6 = param_2[4];
    if (uVar3 - uVar6 <= param_2[2] - uVar6) goto LAB_10048581;
    FUN_101359e0(param_2 + 2,uVar6,uVar3 - uVar6,(LPVOID)0x1,1);
    uVar3 = param_2[4];
    sVar4 = uVar5 - uVar3;
    if (uVar5 < uVar3 || sVar4 == 0) goto LAB_100485bb;
LAB_1004858a:
    uVar6 = param_2[3];
    memset((void *)(uVar3 + uVar6),0,sVar4);
    param_2[4] = uVar5;
    uVar3 = uVar5;
  }
  else {
LAB_10048581:
    uVar3 = param_2[4];
    sVar4 = uVar5 - uVar3;
    if (uVar3 <= uVar5 && sVar4 != 0) goto LAB_1004858a;
LAB_100485bb:
    uVar6 = param_2[3];
  }
  *(uint *)(uVar6 + uVar5) = local_18;
  *(uint *)(uVar6 + 4 + uVar5) = local_1c;
  if (uVar3 < local_20) {
    param_2[4] = local_20;
  }
  *param_2 = uVar5 + 8;
  param_2[1] = (uint)(0xfffffff7 < uVar5);
  *(char *)(param_2 + 10) = (char)param_2[10] + -0x40;
  param_2[9] = 0;
  param_2[8] = 0;
LAB_100485fa:
  *(undefined1 *)local_14 = 0xff;
  return;
}
