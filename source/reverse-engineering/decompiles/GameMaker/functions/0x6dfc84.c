// rea decompile_all
// name: FUN_006dfc84
// address: 0x6dfc84
// body: available
// range: 0x6dfc84-0x6dff96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6dfcaf (push 0x6dff97 followed by fs-segment stack chaining); handler 0x6dff97 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dfc84(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;

  puVar2 = PTR_DAT_00782658;
  puVar1 = PTR_DAT_007817e4;
  local_1c = &stack0xfffffffc;
  iVar4 = 8;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_006dff97;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x6dfcc6;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4fc),*PTR_DAT_0078258c);
  local_28 = 0x6dfcda;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x5e4),*PTR_DAT_0078258c);
  local_28 = 0x6dfcee;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4b4),*PTR_DAT_0078258c);
  local_28 = 0x6dfd02;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4c8),*PTR_DAT_0078258c);
  local_28 = 0x6dfd16;
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x510),*PTR_DAT_0078258c);
  if ((*puVar2 == '\0') || (*(int *)puVar1 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfd31;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4b8),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 4) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfd4d;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4bc),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 8) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfd69;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4c0),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 0xc) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfd85;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x4c4),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 0x10) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfda1;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x518),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 0x14) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfdbd;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x51c),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 0x18) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfdd9;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x530),uVar5);
  if ((*puVar2 == '\0') || (*(int *)(puVar1 + 0x1c) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_28 = 0x6dfdf5;
  FUN_004dbe50(*(undefined4 *)(param_1 + 0x534),uVar5);
  iVar4 = *(int *)(param_1 + 0x4b8);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dfe0b;
    FUN_00417398(*(undefined4 *)puVar1,&local_c);
    local_28 = 0x6dfe1b;
    FUN_0040839c(&local_8,&DAT_006dffb4,local_c);
    local_28 = 0x6dfe25;
    FUN_004dbc6c(iVar4,local_8);
  }
  iVar4 = *(int *)(param_1 + 0x4bc);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dfe3c;
    FUN_00417398(*(undefined4 *)(puVar1 + 4),&stack0xffffffec);
    local_28 = 0x6dfe4c;
    FUN_0040839c(&stack0xfffffff0,&DAT_006dffc8,unaff_ESI);
    local_28 = 0x6dfe56;
    FUN_004dbc6c(iVar4,unaff_EBX);
  }
  iVar4 = *(int *)(param_1 + 0x4c0);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dfe6d;
    FUN_00417398(*(undefined4 *)(puVar1 + 8),&local_1c);
    local_28 = 0x6dfe7d;
    FUN_0040839c(&stack0xffffffe8,&DAT_006dffdc,local_1c);
    local_28 = 0x6dfe87;
    FUN_004dbc6c(iVar4,unaff_EDI);
  }
  iVar4 = *(int *)(param_1 + 0x4c4);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dfe9e;
    FUN_00417398(*(undefined4 *)(puVar1 + 0xc),&local_24);
    local_28 = 0x6dfeae;
    FUN_0040839c(&local_20,&DAT_006dfff0,local_24);
    local_28 = 0x6dfeb8;
    FUN_004dbc6c(iVar4,local_20);
  }
  iVar4 = *(int *)(param_1 + 0x518);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dfecf;
    FUN_00417398(*(undefined4 *)(puVar1 + 0x10),&local_2c);
    local_28 = 0x6dfedf;
    FUN_0040839c(&local_28,&DAT_006e0004,local_2c);
    uVar5 = local_28;
    local_28 = 0x6dfee9;
    FUN_004dbc6c(iVar4,uVar5);
  }
  iVar4 = *(int *)(param_1 + 0x51c);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dff00;
    FUN_00417398(*(undefined4 *)(puVar1 + 0x14),&local_34);
    local_28 = 0x6dff10;
    FUN_0040839c(&local_30,&DAT_006e0018,local_34);
    local_28 = 0x6dff1a;
    FUN_004dbc6c(iVar4,local_30);
  }
  iVar4 = *(int *)(param_1 + 0x530);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dff31;
    FUN_00417398(*(undefined4 *)(puVar1 + 0x18),&local_3c);
    local_28 = 0x6dff41;
    FUN_0040839c(&local_38,&DAT_006e002c,local_3c);
    local_28 = 0x6dff4b;
    FUN_004dbc6c(iVar4,local_38);
  }
  iVar4 = *(int *)(param_1 + 0x534);
  if (*(char *)(iVar4 + 0x3e) != '\0') {
    local_28 = 0x6dff62;
    FUN_00417398(*(undefined4 *)(puVar1 + 0x1c),&local_44);
    local_28 = 0x6dff72;
    FUN_0040839c(&local_40,&LAB_006e0040,local_44);
    local_28 = 0x6dff7c;
    FUN_004dbc6c(iVar4,local_40);
  }
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006dff9e;
  local_20 = (undefined1 *)0x6dff96;
  thunk_FUN_00406e80(&local_44,0x10,puVar3);
  return;
}
